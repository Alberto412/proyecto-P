cmake_minimum_required(VERSION 3.20)

project(ProyectoP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ProyectoP
        src/main.cpp
        src/world/Planeta.cpp
        src/world/Planeta.h
        src/world/Galaxia.cpp
        src/world/Galaxia.h
        src/generation/GeneradorSandbox.cpp
        src/generation/GeneradorSandbox.h
)

target_include_directories(ProyectoP PRIVATE src)