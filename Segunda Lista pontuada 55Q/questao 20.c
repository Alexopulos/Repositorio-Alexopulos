#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um número (0 para encerrar): ");
    scanf("%d", &num);

    while(num != 0) {
        if(num < 0) {
            soma += num;
        }

        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &num);
    }

    printf("Soma dos números negativos: %d\n", soma);

    return 0;
}
