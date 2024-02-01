cmake_minimum_required(VERSION 3.8)

project(pruebas)

add_executable(pruebas
    src/main.cpp
    src/calculadora/calculadora.cpp
)

install(TARGETS pruebas RUNTIME DESTINATION bin)

enable_testing()
add_subdirectory(src/)
