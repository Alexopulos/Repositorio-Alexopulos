#include <stdio.h>

int main() {
    int n, m, i, j, soma, fat;

    printf("Digite quantos valores deseja ler: ");
    scanf("%d", &n);

    i = 0;
    while (i < n) {
        printf("Digite o valor %d (positivo): ", i + 1);
        scanf("%d", &m);

        if (m < 0) {
            printf("Valor inválido. Deve ser positivo.\n");
        } else {
            // Cálculo do somatório
            soma = 0;
            j = 1;
            while (j <= m) {
                soma = soma + j;
                j = j + 1;
            }

            // Cálculo do fatorial
            fat = 1;
            j = 1;
            while (j <= m) {
                fat = fat * j;
                j = j + 1;
            }

            printf("Valor: %d - Somatório: %d - Fatorial: %d\n", m, soma, fat);
        }

        i = i + 1;
    }

    return 0;
}
