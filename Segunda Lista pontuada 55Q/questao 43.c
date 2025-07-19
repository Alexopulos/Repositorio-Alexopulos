#include <stdio.h>

int main() {
    int a, b, c, d;
    int maior, meio1, meio2, menor;
    int i = 1;

    while (i <= 5) {
        printf("\nGrupo %d:\n", i);

        printf("Digite o valor A: ");
        scanf("%d", &a);
        printf("Digite o valor B: ");
        scanf("%d", &b);
        printf("Digite o valor C: ");
        scanf("%d", &c);
        printf("Digite o valor D: ");
        scanf("%d", &d);

        // Exibir na ordem lida
        printf("Ordem lida: %d %d %d %d\n", a, b, c, d);

        // Comparações manuais para ordenar 4 valores em ordem decrescente (sem arrays)

        // Bubble-sort manual com 6 trocas possíveis
        if (a < b) { int temp = a; a = b; b = temp; }
        if (a < c) { int temp = a; a = c; c = temp; }
        if (a < d) { int temp = a; a = d; d = temp; }
        if (b < c) { int temp = b; b = c; c = temp; }
        if (b < d) { int temp = b; b = d; d = temp; }
        if (c < d) { int temp = c; c = d; d = temp; }

        printf("Ordem decrescente: %d %d %d %d\n", a, b, c, d);

        i = i + 1;
    }

    return 0;
}
