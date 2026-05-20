#include <stdio.h>
#include "function_potencia.c"

int main() {
    int base, expoente, resultado;

    printf("POTÊNCIA\n");
    
    printf("Digite o valor inteiro da base: ");
    scanf("%d", &base);

    printf("Digite o valor inteiro do expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Por favor, insira um expoente maior ou igual a 0.\n");
        return 1;
    }

    resultado = calcular_potencia(base, expoente);

    printf("\nO resultado de %d elevado a %d é: %d\n", base, expoente, resultado);
    printf("\nCriado por: Valentina Andrade de Pedro\n");

    return 0;
}
