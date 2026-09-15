<div align="center">

# 🌀 Naruto: The Broken Bond — Static Recompilation & Native PC Port

![C++](https://img.shields.io/badge/C%2B%2B-20-blue.svg?style=for-the-badge&logo=cplusplus)
![Platform](https://img.shields.io/badge/Platform-Xbox%20360%20(PPC)%20%E2%86%92%20PC%20(x86__64)-green.svg?style=for-the-badge&logo=xbox)
![Environment](https://img.shields.io/badge/Environment-Linux%20(x86__64)-A81D33.svg?style=for-the-badge&logo=linux)
![Toolchain](https://img.shields.io/badge/Toolchain-XenonRecomp-orange.svg?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-In%20Active%20Development-success.svg?style=for-the-badge)

<p align="center">
  <b>Recompilación estática del binario ejecutable (<code>default.xex</code>) de <i>Naruto: The Broken Bond</i> (Xbox 360) a C++ nativo para Linux x86_64 con arnés de ejecución High-Level Emulation (HLE).</b>
</p>

</div>

---

## 📌 Descripción General

Este proyecto realiza la **traducción binaria estática** y la **recompilación nativa** de *Naruto: The Broken Bond* (lanzado originalmente para Xbox 360 en 2008). Mediante el recompiler **XenonRecomp**, el código máquina PowerPC (Xenon 64-bit) del ejecutable `default.xex` se traduce a **C++20** con mapeo de instrucciones vectoriales AltiVec a **AVX2 / SSE** mediante SIMDe, permitiendo su compilación y ejecución como un binario nativo Linux x86_64.

El repositorio incluye:
1. **Código Fuente Recompilado (`NarutoSource/`)**: 196 unidades de traducción C++ que contienen las **50.458 funciones PowerPC** del juego.
2. **Arnés de Ejecución y Subsistema HLE (`runtime/`)**: Implementación nativa del gestor de memoria virtual, cargador de secciones XEX, emulación de kernel Xbox (`xboxkrnl.exe`), XAM (`xam.xex`), red (`NetDll`), sistema de hilos concurrentes y controlador de video.
3. **Herramientas de Recompilación (`XenonRecomp/`)**: Herramientas de análisis de tablas de salto indirectas (`XenonAnalyse`) y generación de código (`XenonRecomp`).

> [!IMPORTANT]
> Este repositorio **NO contiene activos con derechos de autor**, archivos multimedia ni el archivo `default.xex`. Los usuarios deben extraer legalmente los archivos de su propia copia física del juego.

---

## 🚦 Estado Actual del Proyecto

| Componente | Estado | Progreso / Detalles |
| :--- | :---: | :--- |
| **Extracción y Descompresión XEX** | `100%` | Extracción de ejecutables comprimidos con LZX y mapeo de 22 secciones. |
| **Análisis de Tablas de Salto** | `100%` | `switch_tables.toml` generado con resolución de tablas indirectas. |
| **Recompilación a C++20** | `100%` | 196 archivos (`ppc_recomp.*.cpp`) + `ppc_func_mapping.cpp` (63 MB `.a`). |
| **Gestor de Memoria Virtual** | `100%` | Mapeo de 16 GB con región de guarda negativa para despacho seguro `CTR=0`. |
| **Arnés de Arranque (`_xstart`)** | `100%` | Punto de entrada del CRT de Xbox arranca e inicializa con éxito. |
| **Subsistema Multihilo (Threading)**| `100%` | `ExCreateThread`, `NtResumeThread`, stacks aislados y sincronización nativa. |
| **Subsistema de Video / GPU** | `En desarrollo` | 720p 60Hz, HSIO Training, shaders `xeshader.sdb`, command buffers. |
| **Audio (XMA) e I/O de Archivos** | `En desarrollo` | Montaje de rutas `GAME:\` / `D:\` y parseo del archivo de paquetes `naruto.bf`. |

---

## 📂 Estructura del Repositorio

```text
├── CMakeLists.txt              # Configuración CMake principal para construir el ejecutable nativo
├── config.toml                 # Configuración del recompilador (direcciones base, secciones, símbolos)
├── switch_tables.toml          # Tablas de salto de switches extraídas de default.xex
├── analysis.toml               # Registro de funciones analizadas por XenonAnalyse
├── find_helpers.py             # Script de inspección y búsqueda de rutinas auxiliares PPC
│
├── NarutoSource/               # Código C++20 recompilado del ejecutable (50.458 funciones PPC)
│   ├── CMakeLists.txt          # Compilación paralela de las 196 TUs en libNarutoRecompiled.a
│   ├── ppc_context.h           # Definición del contexto PPC, registros, FPU, vector y macros
│   ├── ppc_config.h            # Parámetros del binario (PPC_IMAGE_BASE, PPC_CODE_SIZE, etc.)
│   ├── ppc_recomp.*.cpp        # 196 unidades de traducción C++ (ppc_recomp.0.cpp a 195.cpp)
│   └── ppc_func_mapping.cpp    # Tabla global que vincula direcciones guest con funciones host
│
├── runtime/                    # Arnés de ejecución nativo para PC
│   ├── main.cpp                # Punto de entrada PC, captura de señales y volcado en caliente
│   ├── memory_manager.h/.cpp   # Asignador de 16 GB, cargador XEX y tabla de despacho seguro
│   ├── hle_types.h             # Estructuras del kernel Xbox 360 (cadenas ANSI, hilos, video, etc.)
│   └── hle_stubs.h/.cpp        # Implementación de los 286 stubs del kernel y librerías XAM
│
└── XenonRecomp/                # Submódulo: Toolchain XenonRecomp & XenonAnalyse
    ├── XenonAnalyse/           # Analizador de funciones, patrones de salto y bloques básicos
    ├── XenonRecomp/            # Motor de traducción estática PowerPC a C++
    └── XenonUtils/             # Utilidades compartidas y tablas de exportaciones Xbox 360
```

---

## 🛠️ Arquitectura Técnica y Soluciones Clave

### 1. Manejo de Despacho Indirecto Seguro (`Safe Indirect Dispatch`)
En arquitecturas PPC emuladas o recompiladas, una llamada con puntero nulo (`CTR = 0`) o no mapeado provocaba accesos fuera de rango debido al cálculo:
$$\text{Offset} = \text{base} + \text{PPC\_IMAGE\_BASE} + \text{PPC\_IMAGE\_SIZE} + ((0 - \text{PPC\_CODE\_BASE}) \times 2)$$
Al restar en aritmética sin signo de 64 bits, esto producía un desplazamiento **negativo de -2.16 GB** antes del puntero base.
- **Solución implementada**: Se reserva un bloque virtual de **16 GB** con bandera `MAP_NORESERVE` y se sitúa la base virtual guest con un desfase de **+4 GB**. Esto ubica el offset de `y = 0` dentro de una zona válida y mapeada conectada a `SafeIndirectPPCFunc`, permitiendo que cualquier callback nulo retorne limpiamente sin provocar `SIGSEGV`.

### 2. Pila Concurrente y Multihilo Guest (`ExCreateThread`)
El juego depende de múltiples hilos auxiliares para decodificar video Bink, audio XMA y procesamiento en segundo plano:
- Cada llamada a `ExCreateThread` reserva un segmento de pila guest de 64 KB independiente en memoria virtual y lanza un hilo nativo `std::thread`.
- Cada hilo gestiona su propio `PPCContext` aislado y sincroniza su arranque con `NtResumeThread`.

### 3. Bypass de Verificación de Integridad de Heap (`KeGetCurrentProcessType`)
Las rutinas internas de administración de heap de Xbox verifican que el campo `ProcessType` (offset `+379` / `0x17B` de los bloques de heap) coincida estrictamente con el tipo de proceso retornado por `KeGetCurrentProcessType()`. El arnés garantiza que dicho byte se mantenga en `1` (`Title Process`), previniendo caídas del kernel de Xbox por `KeBugCheckEx(0xF4)`.

---

## 🚀 Requisitos y Compilación

### Requisitos del Sistema
- **Sistema Operativo**: Linux x86_64 (Debian 12+, Ubuntu 22.04+, Arch Linux, etc.).
- **Compilador**: Clang / Clang++ 17 o superior con soporte para **C++20** e instrucciones **AVX2**.
- **Herramientas de Construcción**: CMake 3.22+, Ninja.
- **Librerías**: `libcapstone-dev`, `pkg-config`.

### Pasos de Compilación

1. **Clonar el repositorio con submódulos**:
   ```bash
   git clone --recursive https://github.com/Hoyuse/NarutoTheBrokenBond-PC.git
   cd NarutoTheBrokenBond-PC
   ```

2. **Configurar el proyecto con CMake**:
   ```bash
   cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
   ```

3. **Compilar el arnés de ejecución**:
   ```bash
   ninja -C build naruto_runtime
   ```

4. **Ejecutar el juego**:
   *(Coloca los archivos de tu copia del juego en una carpeta, por ejemplo `Naruto_The_Broken_Bond/`)*:
   ```bash
   ./build/naruto_runtime --verbose Naruto_The_Broken_Bond/default.xex
   ```

---

## 📄 Licencia y Descargo de Responsabilidad

- Este proyecto se distribuye con fines educativos, de preservación digital e investigación de ingeniería inversa.
- No se incluye ningún archivo propietario de Microsoft Xbox 360 ni de Ubisoft Montreal / Bandai Namco.
- *Naruto: The Broken Bond* es una marca registrada de Ubisoft y Masashi Kishimoto / Shueisha / Pierrot. Todas las marcas registradas pertenecen a sus respectivos propietarios.
