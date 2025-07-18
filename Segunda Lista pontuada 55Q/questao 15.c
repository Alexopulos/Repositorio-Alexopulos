#include <stdio.h>

int main() {
    int valor, i25 = 0, i50 = 0, i75 = 0, i100 = 0;

    printf("Digite um número (negativo para encerrar): ");
    scanf("%d", &valor);

    while(valor >= 0) {
        if(valor >= 0 && valor <= 25) {
            i25++;
        } else if(valor <= 50) {
            i50++;
        } else if(valor <= 75) {
            i75++;
        } else if(valor <= 100) {
            i100++;
        }

        printf("Digite um número (negativo para encerrar): ");
        scanf("%d", &valor);
    }

    printf("[0-25]: %d\n", i25);
    printf("[26-50]: %d\n", i50);
    printf("[51-75]: %d\n", i75);
    printf("[76-100]: %d\n", i100);

    return 0;
}
