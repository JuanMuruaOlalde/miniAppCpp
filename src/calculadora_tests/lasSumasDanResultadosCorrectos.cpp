#include <stdlib.h>

#include "../../src/calculadora/calculadora.hpp"

int main(int argc, char **argv)
{
    Calculadora calculadora;
    if (calculadora.suma(2, 3) != 5){
        return(EXIT_FAILURE);
    }
    if (calculadora.suma(0, 3) != 3){
        return(EXIT_FAILURE);
    }
    if (calculadora.suma(2, 0) != 2){
        return(EXIT_FAILURE);
    }
    if (calculadora.suma(0, 0) != 0){
        return(EXIT_FAILURE);
    }
    return(EXIT_SUCCESS);
}

