#include <stdio.h>
#include <assert.h>
#include "function_potencia.c"

int main() {
    
    int resultado;

    printf("TESTES AUTOMATIZADOS\n");

    assert(calcular_potencia(2, 2) == 4);
    assert(calcular_potencia(3, 3) == 27);
    assert(calcular_potencia(4, 4) == 256);
    assert(calcular_potencia(5, 5) == 3125);

    printf("Testes concluídos\n");
    printf("Criado por Valentina Andrade de Pedro\n");

    return 0;
}
