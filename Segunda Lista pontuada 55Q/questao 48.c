#include <stdio.h>

int main() {
    int i = 1;
    int matricula;
    float nota;

    while (i <= 75) {
        printf("\nAluno %d:\n", i);

        printf("Matrícula: ");
        scanf("%d", &matricula);

        printf("Nota final: ");
        scanf("%f", &nota);

        printf("Matrícula: %d - Nota: %.2f - Conceito: ", matricula, nota);

        if (nota >= 0 && nota <= 4.9) {
            printf("D\n");
        } else if (nota >= 5.0 && nota <= 6.9) {
            printf("C\n");
        } else if (nota >= 7.0 && nota <= 8.9) {
            printf("B\n");
        } else if (nota >= 9.0 && nota <= 10.0) {
            printf("A\n");
        } else {
            printf("Nota inválida\n");
        }

        i = i + 1;
    }

    return 0;
}
