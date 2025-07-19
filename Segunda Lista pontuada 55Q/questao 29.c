#include <stdio.h>

int main() {
    int i, soma = 0, qtd = 0;

    for(i = 13; i <= 73; i++) {
        soma += i;
        qtd++;
    }

    printf("Média dos números entre 13 e 73: %.2f\n", (float)soma / qtd);

    return 0;
}
