#include <stdio.h>

int main() {
    int X, Y, i;
    int resultado = 1;

    printf("Digite o valor de X (inteiro positivo): ");
    scanf("%d", &X);

    printf("Digite o valor de Y (inteiro positivo): ");
    scanf("%d", &Y);

    if (X < 0 || Y < 0) {
        printf("Valores inválidos! Digite inteiros positivos.\n");
    } else {
        i = 1;
        while (i <= Y) {
            resultado = resultado * X;
            i = i + 1;
        }

        printf("%d elevado a %d é %d\n", X, Y, resultado);
    }

    return 0;
}
