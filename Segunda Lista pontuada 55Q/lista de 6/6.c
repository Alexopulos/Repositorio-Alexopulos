#include <stdio.h>

int main() {
    int B = 0, L = 0, A = 0;
    int i, j;

    // Entrada válida para B
    while (B < 3 || B % 2 == 0) {
        printf("Digite a base da arvore (ímpar >= 3): ");
        scanf("%d", &B);
    }

    // Entrada válida para L
    while (L < 1 || L % 2 == 0 || L > B / 2) {
        printf("Digite a largura do tronco (ímpar >= 1 e <= %d): ", B / 2);
        scanf("%d", &L);
    }

    // Entrada válida para A
    while (A < 2 || A > B / 2) {
        printf("Digite a altura do tronco (>= 2 e <= %d): ", B / 2);
        scanf("%d", &A);
    }

    // Copa da árvore
    for (i = 1; i <= B; i += 2) {
        for (j = 0; j < (B - i) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Tronco da árvore
    for (i = 0; i < A; i++) {
        for (j = 0; j < (B - L) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < L; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
