# Documentación Técnica: Recompilación Estática y Runtime de Naruto: The Broken Bond

## 1. Especificaciones del Binario y Arquitectura Original
- **Título**: Naruto: The Broken Bond (2008)
- **Desarrollador / Distribuidor**: Ubisoft Montreal / Ubisoft
- **Plataforma Original**: Microsoft Xbox 360
- **CPU**: Xenon (3 núcleos / 6 hilos PowerPC 64-bit a 3.2 GHz, unidad vectorial AltiVec/VMX128)
- **GPU**: Xenos (ATI R500 personalizada con 10 MB eDRAM embebida)
- **Formato del Ejecutable**: `default.xex` (formato Xbox Executable)
- **Compresión del Contenedor**: LZX con encabezados cifrados/firmados
- **Dirección Base de Carga**: `0x82000000`
- **Punto de Entrada (`_xstart`)**: `0x821EF970`
- **Tamaño de la Imagen**: `0x1430000` (21.168.128 bytes)
- **Total de Secciones Mapeadas**: 22 secciones (incluyendo `.text`, `.rdata`, `.pdata`, `.data`, bibliotecas embebidas y BINK)
- **Total de Funciones PowerPC Recompiladas**: 50.458 funciones

---

## 2. Mapa de Memoria Virtual en PC (x86_64)

Para garantizar total compatibilidad con las instrucciones de carga/almacenamiento de 32 bits de PowerPC y permitir saltos indirectos seguros, el gestor de memoria [runtime/memory_manager.cpp](runtime/memory_manager.cpp) implementa un diseño de direcciones virtuales de 16 GB con asignación dispersa (`MAP_NORESERVE`):

```
+-------------------------------------------------------------------------------+
| Rango de Memoria (Host)          | Propósito                                  |
+-------------------------------------------------------------------------------+
| raw_base + 0x00000000            | Zona de Guarda Negativa (Offsets para      |
|                                  | indirect calls nulas: CTR=0 -> 0x7F1EC000) |
+-------------------------------------------------------------------------------+
| raw_base + 0x100000000 (m_base)  | Base Virtual del Guest (0x00000000)        |
|  ├── 0x10000000 - 0x3F000000     | Heap Dinámico del Guest (Allocations, D3D) |
|  ├── 0x70000000                  | Pila Principal de Ejecución (_xstart SP)   |
|  ├── 0x82000000 - 0x83430000     | Imagen de Secciones XEX del Juego          |
|  └── 0x83430000 + (2 * codeSize) | Tabla de Despacho Indirecto Rápido         |
+-------------------------------------------------------------------------------+
| m_base + 0x100000000             | Límite Superior Virtual (4 GB Guest)       |
+-------------------------------------------------------------------------------+
```

---

## 3. Subsistemas de Emulación de Alto Nivel (HLE)

El ejecutable de Xbox 360 interactúa con el sistema operativo a través de importaciones resueltas dinámicamente o por ordinal desde módulos del sistema:
- `xboxkrnl.exe`: Kernel de Xbox 360 (gestión de memoria física/virtual, sincronización, hilos, I/O, D3D).
- `xam.xex`: Xbox Application Manager (perfiles de usuario, mensajes en pantalla, notificaciones, audio, storage).

### 3.1. Gestión de Procesos e Integridad de Heap
- **Función**: `KeGetCurrentProcessType`
- **Comportamiento**: En Xbox 360, devuelve `1` para el proceso principal del juego (`Title Process`) y `2` para procesos del sistema.
- **Regla Crítica**: Las rutinas de asignación de memoria del CRT de Xbox verifican que el byte `379` (`0x17B`) en el encabezado del descriptor del heap coincida con el valor devuelto por `KeGetCurrentProcessType`. Si no coinciden, se invoca un pánico de kernel `KeBugCheckEx(0xF4)`. El HLE de este proyecto asegura que dicho byte contenga permanentemente el valor `1`.

### 3.2. Multihilo Concurrente
- **Función**: `ExCreateThread` y `NtResumeThread`
- **Arquitectura**:
  - Cada hilo guest lanzado mediante `ExCreateThread` recibe un identificador único, un búfer de pila independiente en la memoria virtual del guest, y un objeto `std::thread` nativo.
  - Cada hilo ejecuta con su propia estructura `PPCContext` aislada.
  - La bandera de creación `CREATE_SUSPENDED` (bit 0 de `creationFlags`) detiene el hilo hasta que se reciba `NtResumeThread`.

### 3.3. Interfaz Gráfica y Video (`Vd*`)
- **Modo de Pantalla**: 1280x720 píxeles, 60.0 Hz progresivo (`XGetVideoMode`, `VdQueryVideoMode`).
- **Entrenamiento de Bus HSIO**: `VdIsHSIOTrainingSucceeded` retorna `1` (`TRUE`) para confirmar la sincronización de bus entre CPU y eDRAM.

---

## 4. Historial de Depuración y Resoluciones Críticas

1. **Bucle Infinito en `strlen` (`sub_8212D2B0`)**:
   - *Causa*: La instrucción PowerPC `eqv` no fue implementada por el recompiler, dejando un registro con basura no inicializada en la rutina de cálculo de longitud de strings.
   - *Solución*: Sustitución de `sub_8212D2B0` con una implementación nativa en C++.

2. **Fallo de Segmentación en Despacho Indirecto (`CTR = 0`)**:
   - *Causa*: La macro `PPC_LOOKUP_FUNC` con entrada `0` producía un subdesbordamiento aritmético de 64 bits equivalente a un offset de `-2.16 GB`.
   - *Solución*: Asignación virtual de 16 GB con la base del guest desplazada +4 GB, vinculando la entrada nula a un manejador seguro (`SafeIndirectPPCFunc`).

4. **Deadlock en `LR=0x8221f458` (CRT `_lock`)**:
   - *Causa*: Los hilos secundarios tenían su stack inicializado en `0x50000000`, colisionando con su estructura `_tiddata` del CRT. Esto causaba corrupción del puntero de entrada y muerte de hilos mientras retenían CriticalSections (`0x82e2f898`), bloqueando el Main Thread indefinidamente.
   - *Solución*: Asignación dedicada de pilas para hilos guest en el rango `0x60000000 - 0x6E000000` (`s_nextThreadStackBase`), aislamiento estricto de herencia TLS (slot 0) y soporte no-op seguro para CriticalSections con dirección 0.

5. **Bucle Infinito en Enumeración de Contenido (`NtResumeThread` / `XamEnumerate`)**:
   - *Causa*: `XamEnumerate` no escribía `*itemsReturned = 0` ni devolvía `ERROR_NO_MORE_FILES` (18), provocando que el bucle de enumeración de partidas/DLC no terminara nunca.
   - *Solución*: Implementación de `XamContentCreateEnumerator` y `XamEnumerate` devolviendo handle válido (`0x7001+`), 0 items y código 18 (`ERROR_NO_MORE_FILES`).

6. **Crash por Invocación Indirecta de Direcciones del Heap (`sub_8215B288`, CTR=`0x50011c08`)**:
   - *Causa*: Durante la inicialización de configuraciones de video/motor, `sub_8215B288` ejecutaba un salto indirecto incondicional (`bctrl`). Para ciertos índices, la tabla contenía referencias a estructuras de datos o punteros del heap (`0x50011c08`), provocando que `PPC_LOOKUP_FUNC` calculara un offset fuera del rango de código ejecutable (`0x82120000 - 0x82C7A2F8`), produciendo un puntero host nulo y resultando en SIGSEGV.
   - *Solución*: Sobrescritura nativa del símbolo débil `sub_8215B288` en `runtime/hle_stubs.cpp`, ejecutando las escrituras en el arreglo de configuraciones y filtrando la ejecución de callbacks únicamente a direcciones dentro del rango de código válido de PPC.

7. **Hito de Ejecución Multihilo Concurrente**:
   - El motor de *Naruto: The Broken Bond* inicializa de forma exitosa y ejecuta concurrentemente 8 hilos (Main Thread + 7 Guest Threads de trabajo `0x5000` a `0x5006`), alternando activamente en el bucle principal de temporización y procesamiento de tareas sin fallos ni bloqueos.

