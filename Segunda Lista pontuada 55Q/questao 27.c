#include <stdio.h>

int main() {
    int i, valor, maior, menor, soma = 0;

    printf("Digite o 1º valor: ");
    scanf("%d", &valor);

    maior = valor;
    menor = valor;
    soma = valor;

    for(i = 2; i <= 500; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if(valor > maior) {
            maior = valor;
        }

        if(valor < menor) {
            menor = valor;
        }

        soma += valor;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", (float)soma / 500);

    return 0;
}
