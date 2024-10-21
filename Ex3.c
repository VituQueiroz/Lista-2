#include <stdio.h>

int main() {
    float vet[4];
    float soma = 0;
    float media;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    media = soma / 4;

    printf("Media: %.2f\n", media);
    return 0;
}
