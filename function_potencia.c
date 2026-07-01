int potencia(int base, int expoente) {
    int resultado = 1;
    int i;
    for (i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }
    return resultado;
}
