#include <stdio.h>

int main() {
    int n, i = 0, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor inválido. Digite um número positivo.\n");
    } else {
        while (i < n) {
            soma = soma + 10;
            i = i + 1;
        }

        printf("Valor final de H: %d\n", soma);
    }

    return 0;
}
