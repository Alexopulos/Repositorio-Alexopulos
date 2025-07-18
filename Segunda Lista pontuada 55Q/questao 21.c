#include <stdio.h>

int main() {
    int num, produto = 1, temPar = 0;

    printf("Digite um número inteiro e positivo (0 para encerrar): ");
    scanf("%d", &num);

    while(num != 0) {
        if(num % 2 == 0) {
            produto *= num;
            temPar = 1;
        }

        printf("Digite um número inteiro e positivo (0 para encerrar): ");
        scanf("%d", &num);
    }

    if(temPar) {
        printf("Produto dos números pares: %d\n", produto);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}
