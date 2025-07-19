#include <stdio.h>

int main() {
    int i, a, b, j;

    for(i = 1; i <= 5; i++) {
        printf("Digite o par de valores (a < b): ");
        scanf("%d %d", &a, &b);

        if(a % 2 != 0) {
            a++;
        }

        for(j = a; j <= b; j += 2) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
