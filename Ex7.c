#include <stdio.h>

int main() {
    int vet[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d ", &vet[i]);
    }

    printf("Ordem inversa:\n");
    for (int i = 2; i >= 0; i--) {
        printf("%d ", vet[i]);
    }

    return 0;
}
