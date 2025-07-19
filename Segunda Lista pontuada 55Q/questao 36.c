#include <stdio.h>

int main() {
    int N, i, j, valor, fat;

    printf("Digite quantos valores deseja ler: ");
    scanf("%d", &N);

    i = 0;
    while (i < N) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Fatorial não definido para negativos.\n");
        } else {
            fat = 1;
            j = 1;
            while (j <= valor) {
                fat = fat * j;
                j = j + 1;
            }
            printf("Valor: %d - Fatorial: %d\n", valor, fat);
        }

        i = i + 1;
    }

    return 0;
}
