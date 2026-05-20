#include <stdio.h>
#include "function_potencia.c"

int main() {
    int resultado;

    printf("TESTES AUTOMATIZADOS\n");

    resultado = calcular_potencia(2, 2);
    printf("Teste 1 (2^2):\n");
    printf("Resultado obtido: %d (Esperado: 4)\n\n", resultado);

    resultado = calcular_potencia(3, 3);
    printf("Teste 2 (3^3):\n");
    printf("Resultado obtido: %d (Esperado: 27)\n\n", resultado);

    resultado = calcular_potencia(4, 4);
    printf("Teste 3 (4^4):\n");
    printf("Resultado obtido: %d (Esperado: 256)\n\n", resultado);

    resultado = calcular_potencia(5, 5);
    printf("Teste 4 (5^5):\n");
    printf("Resultado obtido: %d (Esperado: 3125)\n\n", resultado);

    printf("Testes concluídos\n");
    printf("Criado por Valentina Andrade de Pedro\n");

    return 0;
}
