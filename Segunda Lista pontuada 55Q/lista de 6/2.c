#include <stdio.h>

int main() {
    int n, i, j;

    do {
        printf("Digite um valor N >= 2: ");
        scanf("%d", &n);
    } while (n < 2);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
