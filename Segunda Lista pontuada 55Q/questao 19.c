#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, somaPares = 0, somaTotal = 0, total = 0;

    printf("Digite um número (0 para encerrar): ");
    scanf("%d", &num);

    while(num != 0) {
        if(num % 2 == 0) {
            pares++;
            somaPares += num;
        } else {
            impares++;
        }

        somaTotal += num;
        total++;

        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &num);
    }

    if(total > 0) {
        printf("Quantidade de pares: %d\n", pares);
        printf("Quantidade de ímpares: %d\n", impares);
        if(pares > 0) {
            printf("Média dos pares: %.2f\n", (float)somaPares / pares);
        }
        printf("Média geral: %.2f\n", (float)somaTotal / total);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}

