#include <stdio.h>

int fatorial(int x) {
    int i, f = 1;
    for (i = 1; i <= x; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int N, p;
    int fatN, fatP, fatNmenosP;
    float arranjo, combinacao;

    printf("Digite N (inteiro positivo): ");
    scanf("%d", &N);

    printf("Digite p (inteiro positivo, p <= N): ");
    scanf("%d", &p);

    if (N < 0 || p < 0 || p > N) {
        printf("Valores inválidos!\n");
    } else {
        fatN = fatorial(N);
        fatP = fatorial(p);
        fatNmenosP = fatorial(N - p);

        arranjo = (float)fatN / fatNmenosP;
        combinacao = (float)fatN / (fatP * fatNmenosP);

        printf("Arranjo A(%d,%d) = %.0f\n", N, p, arranjo);
        printf("Combinação C(%d,%d) = %.0f\n", N, p, combinacao);
    }

    return 0;
}


