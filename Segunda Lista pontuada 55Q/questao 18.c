#include <stdio.h>

int main() {
    int m, i, soma, divisores, fat;

    printf("Digite um valor (0 para sair): ");
    scanf("%d", &m);

    while(m > 0) {
        if(m % 2 == 0) {
            divisores = 0;
            for(i = 1; i <= m; i++) {
                if(m % i == 0) {
                    divisores++;
                }
            }
            printf("%d é par e possui %d divisores\n", m, divisores);
        } else {
            if(m < 10) {
                fat = 1;
                for(i = 1; i <= m; i++) {
                    fat *= i;
                }
                printf("%d é ímpar < 10 e seu fatorial é %d\n", m, fat);
            } else {
                soma = 0;
                for(i = 1; i <= m; i++) {
                    soma += i;
                }
                printf("%d é ímpar >= 10 e a soma de 1 até %d é %d\n", m, m, soma);
            }
        }

        printf("Digite um valor (0 para sair): ");
        scanf("%d", &m);
    }

    return 0;
}
