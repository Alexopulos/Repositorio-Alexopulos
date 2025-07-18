#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;

    printf("Digite o código do aluno (0 para encerrar): ");
    scanf("%d", &codigo);

    while(codigo != 0) {
        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("Codigo: %d - Media: %.2f\n", codigo, media);

        printf("Digite o código do aluno (0 para encerrar): ");
        scanf("%d", &codigo);
    }

    return 0;
}
