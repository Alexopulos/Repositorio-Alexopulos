#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Número inválido! Deve ser não negativo.\n");
    } else {
        i = 1;
        while (i <= n) {
            fatorial = fatorial * i;
            i = i + 1;
        }

        printf("Fatorial de %d é %d\n", n, fatorial);
    }

    return 0;
}

