
#include <stdio.h>

int main() {
    int numero = 2;
    int soma, i, count = 0;

    while (count < 5) {
        soma = 0;
        i = 1;

        while (i < numero) {
            if (numero % i == 0) {
                soma = soma + i;
            }
            i = i + 1;
        }

        if (soma == numero) {
            printf("Número perfeito: %d\n", numero);
            count = count + 1;
        }

        numero = numero + 1;
    }

    return 0;
}
