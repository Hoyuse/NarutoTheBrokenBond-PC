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

3. **Congelamiento de Inicialización**:
   - *Causa*: Los hilos de soporte no eran creados físicamente y `VdIsHSIOTrainingSucceeded` reportaba fallo de entrenamiento.
   - *Solución*: Implementación de hilos nativos independientes y confirmación de estado listo en los stubs de video.
