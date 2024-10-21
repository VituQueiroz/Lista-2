#include <stdio.h>

float dobro(float n) {
    return n * 2;
}

int main() {
    float numero;

    scanf("%f", &numero);

    printf("O dobro de %.2f é: %.2f\n", numero, dobro(numero));

    return 0;
}
