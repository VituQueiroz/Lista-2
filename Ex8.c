#include <stdio.h>

int maior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("O maior número é: %d\n", maior(a, b));

    return 0;
}
