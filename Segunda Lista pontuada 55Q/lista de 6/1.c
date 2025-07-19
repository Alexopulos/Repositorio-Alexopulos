#include <stdio.h>

int main() {
    int n, i, j;
    printf("Digite a altura do Triangulo de Pascal: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int valor = 1;
        for (j = 0; j < n - i - 1; j++) printf("  ");
        for (j = 0; j <= i; j++) {
            printf("%4d", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
