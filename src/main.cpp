#include <iostream>
#include "calculadora/calculadora.hpp"

int main(int argc, char **argv)
{
    Calculadora calculadora;
    std::cout << "La suma de 3 y 2 es " << calculadora.suma(3, 2) << std::endl;

    std::cout << std::endl << "Pulsar [enter] para continuar..." << std::endl;
    std::cin.get();

    std::exit(EXIT_SUCCESS);
}
