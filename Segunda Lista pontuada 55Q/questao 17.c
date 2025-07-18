#include <stdio.h>

int main() {
    int m, n, i, soma;

    printf("Digite os valores de m e n (0 0 para sair): ");
    scanf("%d %d", &m, &n);

    while(m > 0 && n > 0) {
        soma = 0;

        for(i = 0; i < n; i++) {
            soma += m + i;
        }

        printf("Soma dos %d inteiros a partir de %d: %d\n", n, m, soma);

        printf("Digite os valores de m e n (0 0 para sair): ");
        scanf("%d %d", &m, &n);
    }

    return 0;
}
