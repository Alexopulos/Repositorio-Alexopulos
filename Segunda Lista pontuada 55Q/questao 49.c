#include <stdio.h>

int main() {
    int N, i;
    int fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Número inválido! Deve ser positivo.\n");
    } else {
        i = 1;
        while (i <= N) {
            fatorial = fatorial * i;
            i = i + 1;
        }

        printf("Fatorial de %d é %d\n", N, fatorial);
    }

    return 0;
}
