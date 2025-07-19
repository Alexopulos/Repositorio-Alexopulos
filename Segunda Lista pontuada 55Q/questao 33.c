#include <stdio.h>

int main() {
    int i, j, N;

    for(i = 1; i <= 20; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &N);

        for(j = 1; j <= N; j++) {
            printf("%d x %d = %d\n", j, N, j * N);
        }

        printf("\n");
    }

    return 0;
}
