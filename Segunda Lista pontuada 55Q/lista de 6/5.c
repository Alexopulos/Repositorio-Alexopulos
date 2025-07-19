#include <stdio.h>

int main() {
    int altura, i, j;
    char tipo;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    printf("Digite P para preenchido ou V para vazado: ");
    scanf(" %c", &tipo);

    i = 1;
    while (i <= altura) {
        j = 1;
        while (j <= i) {
            if (tipo == 'P' || tipo == 'p') {
                printf("*");
            } else {
                if (j == 1 || j == i || i == altura) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}
