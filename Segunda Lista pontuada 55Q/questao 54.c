#include <stdio.h>

int main() {
    int a, b;
    float part1, part2;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Os números não podem ser iguais!\n");
    } else {
        
        part1 = a + (b - a) / 3.0f;
        part2 = a + 2 * (b - a) / 3.0f;

        printf("Pontos que dividem o intervalo em 3 partes iguais:\n");
        printf("%.2f\n", part1);
        printf("%.2f\n", part2);
    }

    return 0;
}
