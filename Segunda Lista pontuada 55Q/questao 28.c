#include <stdio.h>

int main() {
    int i, n;
    float S = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("1/%d + ", i);
        S += 1.0 / i;
    }

    printf("\nSoma final: %.4f\n", S);

    return 0;
}
