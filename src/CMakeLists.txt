
add_executable(lasSumasDanResultadosCorrectos
    calculadora_tests/lasSumasDanResultadosCorrectos.cpp
    calculadora/calculadora.cpp
)
add_test(NAME lasSumasDanResultadosCorrectos COMMAND lasSumasDanResultadosCorrectos)


