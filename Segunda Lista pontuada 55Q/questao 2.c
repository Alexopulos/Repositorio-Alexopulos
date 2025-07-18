#include <stdio.h>

int main() {
    int N, i, j, fatorial;
    float E = 1.0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        fatorial = 1;
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("O valor de E é: %.4f\n", E);
    return 0;
}
