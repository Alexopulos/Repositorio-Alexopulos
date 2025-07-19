#include <stdio.h>

int main() {
    float X, termo, potencia;
    int i;

    printf("Digite o valor de X (diferente de 0): ");
    scanf("%f", &X);

    if (X == 0) {
        printf("Divisão por zero não é permitida.\n");
        return 1;
    }

    i = 1;
    while (i <= 20) {
        potencia = 1;
        
        // Calcula X^i usando multiplicação repetida
        int j = 1;
        while (j <= i) {
            potencia = potencia * X;
            j = j + 1;
        }

        termo = 1 / potencia;
        printf("Termo %d: %.6f\n", i, termo);

        i = i + 1;
    }

    return 0;
}
