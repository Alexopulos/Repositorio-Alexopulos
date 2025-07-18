#include <stdio.h>

int main() {
    int valor, contador = 0;

    printf("Digite um valor (negativo para encerrar): ");
    scanf("%d", &valor);

    while(valor >= 0) {
        if(contador % 20 == 0) {
            printf("Valor\tQuadrado\tCubo\t\tRaiz\n");
        }

        float raiz = 1;
        int i;
        for(i = 1; i*i <= valor; i++) {
            raiz = i;
        }

        printf("%d\t%d\t\t%d\t\t%.2f\n", valor, valor*valor, valor*valor*valor, raiz);
        contador++;

        printf("Digite um valor (negativo para encerrar): ");
        scanf("%d", &valor);
    }

    return 0;
}
