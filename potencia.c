#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente);

int main(int argc, char *argv[]) {
    int base, expoente, resultado;
    char saida[100];

    if (argc > 2) {
        base = atoi(argv[1]);
        expoente = atoi(argv[2]);
    } else {
        printf("Digite a base: ");
        scanf("%d", &base);
        printf("Digite o expoente: ");
        scanf("%d", &expoente);
    }

    resultado = potencia(base, expoente);
    sprintf(saida, "%d elevado a %d e %d\n", base, expoente, resultado);
    printf("%s", saida);

    FILE *arquivo = fopen("potencia.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%s", saida);
        fclose(arquivo);
    }

    printf("Criado por Valentina Andrade");

    return 0;
}
