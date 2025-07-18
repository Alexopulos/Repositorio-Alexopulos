#include <stdio.h>

int main() {
    int i, j, n, valor;

    for(i = 1; i <= 20; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &n);

        for(j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }

        printf("\n");
    }

    return 0;
}
