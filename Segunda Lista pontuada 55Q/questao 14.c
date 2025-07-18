#include <stdio.h>

int main() {
    int valor, positivos = 0, negativos = 0, total = 0;
    float soma = 0;

    printf("Digite um valor (0 para encerrar): ");
    scanf("%d", &valor);

    while(valor != 0) {
        soma += valor;
        total++;

        if(valor > 0) {
            positivos++;
        } else {
            negativos++;
        }

        printf("Digite um valor (0 para encerrar): ");
        scanf("%d", &valor);
    }

    if(total > 0) {
        printf("Media: %.2f\n", soma / total);
        printf("Positivos: %d\n", positivos);
        printf("Negativos: %d\n", negativos);
        printf("Percentual positivos: %.2f%%\n", (float)positivos / total * 100);
        printf("Percentual negativos: %.2f%%\n", (float)negativos / total * 100);
    } else {
        printf("Nenhum valor foi digitado.\n");
    }

    return 0;
}
