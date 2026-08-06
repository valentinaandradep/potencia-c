#include <stdio.h>
#include <assert.h>
#include "function_potencia.c"

int main(void) {
    assert(potencia(2, 2) == 4);
    assert(potencia(3, 3) == 27);
    assert(potencia(4, 4) == 256);
    assert(potencia(5, 5) == 3125);

    printf("Todos os testes passaram!\n");
    printf("Criado por Valentina Andrade");

    return 0;
}
