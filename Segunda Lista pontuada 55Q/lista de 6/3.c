#include <stdio.h>

int main() {
    int largura, i, j, espacos, xs;
    printf("Digite a largura central (ímpar): ");
    scanf("%d", &largura);

    if (largura % 2 == 0) {
        largura = largura + 1;
    }

    i = 1;
    while (i <= largura) {
        espacos = (largura - i) / 2;
        j = 0;
        while (j < espacos) {
            printf(" ");
            j = j + 1;
        }

        j = 0;
        while (j < i) {
            printf("X");
            j = j + 1;
        }

        printf("\n");
        i = i + 2;
    }

    i = largura - 2;
    while (i >= 1) {
        espacos = (largura - i) / 2;
        j = 0;
        while (j < espacos) {
            printf(" ");
            j = j + 1;
        }

        j = 0;
        while (j < i) {
            printf("X");
            j = j + 1;
        }

        printf("\n");
        i = i - 2;
    }

    return 0;
}
