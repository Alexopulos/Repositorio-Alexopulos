#include <stdio.h>

int main() {
    int i, n, valor, j, fat;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        fat = 1;
        for(j = 1; j <= valor; j++) {
            fat *= j;
        }

        printf("Valor: %d - Fatorial: %d\n", valor, fat);
    }

    return 0;
}
