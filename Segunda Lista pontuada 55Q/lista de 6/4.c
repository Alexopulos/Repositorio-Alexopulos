#include <stdio.h>

int main() {
    int altura, i, j;
    char tipo;

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    printf("Digite P para preenchido ou V para vazado: ");
    scanf(" %c", &tipo);

    i = 0;
    while (i < altura) {
        j = 0;
        while (j < altura) {
            if (tipo == 'P' || tipo == 'p') {
                printf("*");
            } else {
                if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
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
