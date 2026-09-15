<div align="center">

# 🌀 Naruto: The Broken Bond — Static Recompilation

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue.svg?style=for-the-badge&logo=cplusplus)
![Platform](https://img.shields.io/badge/Platform-Xbox%20360%20(PPC)-green.svg?style=for-the-badge&logo=xbox)
![Environment](https://img.shields.io/badge/Environment-Debian%20Linux-A81D33.svg?style=for-the-badge&logo=debian)
![Toolchain](https://img.shields.io/badge/Toolchain-XenonRecomp-orange.svg?style=for-the-badge)

<p align="center">
  <b>Proyecto de ingeniería inversa y traducción estática binaria de <i>Naruto: The Broken Bond</i> (`default.xex`) a código C++ nativo.</b>
</p>

</div>

---

## 📌 Descripción General

Este proyecto busca traducir las instrucciones de la arquitectura **PowerPC (PPC)** del ejecutable original de Xbox 360 a **C++ moderno**, permitiendo el análisis de código, la preservación digital y la futura ejecución nativa en arquitectura x86_64.

> [!NOTE]  
> Este repositorio forma parte de una investigación técnica y estudio práctico de la arquitectura de sistemas embebidos, estructuras C++ y reversing de ejecutables XEX.

---

## 🚦 Estado del Proyecto

| Etapa | Estado | Detalles |
| :--- | :---: | :--- |
| **Entorno Linux** | `100%` | Configurado en Debian con `Clang`, `Ninja` y `CMake`. |
| **Toolchain** | `100%` | `XenonRecomp` y `XenonAnalyse` compilados con éxito. |
| **Análisis de Tablas** | `100%` | Generación de `switch_tables.toml` completada mediante `XenonAnalyse`. |
| **Configuración TOML** | `90%` | `config.toml` maquetado; en búsqueda de rutinas auxiliares PowerPC. |
| **Generación de C++** | `En proceso` | Listo para ejecutar traducción masiva a la carpeta `NarutoSource/`. |

---

## 📂 Estructura del Repositorio

```text
├── config.toml              # Archivo de configuración principal (rutas y símbolos)
├── switch_tables.toml       # Tablas de salto extraídas del ejecutable
├── NarutoSource/            # Código C++ generado post-recompilación (.cpp / .h)
└── XenonRecomp/             # Submódulo del motor de recompilación estática
    ├── XenonAnalyse/        # Analizador de estructuras y tablas PowerPC
    ├── XenonRecomp/         # Recompilador principal a C++
    └── XenonUtils/          # Cabeceras de contexto (ppc_context.h)x.
