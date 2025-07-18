#include <stdio.h>

int main() {
    int valor, soma = 0, qtd = 0;

    printf("Digite um valor positivo (negativo para parar): ");
    scanf("%d", &valor);

    while(valor >= 0) {
        soma += valor;
        qtd++;

        printf("Digite um valor positivo (negativo para parar): ");
        scanf("%d", &valor);
    }

    if(qtd > 0) {
        printf("Media aritmetica: %.2f\n", (float)soma / qtd);
    } else {
        printf("Nenhum valor positivo foi lido.\n");
    }

    return 0;
}
