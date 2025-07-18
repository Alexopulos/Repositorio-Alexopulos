#include <stdio.h>

int main() {
    int n, a1, r, i, termo, soma = 0;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);

    printf("Digite a razão (r): ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}
