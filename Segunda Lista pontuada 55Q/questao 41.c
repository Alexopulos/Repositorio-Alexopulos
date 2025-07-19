#include <stdio.h>

int main() {
    int i;
    float n1, n2, n3, mp, somaMedias = 0, mediaGeral;

    i = 1;
    while (i <= 50) {
        printf("Aluno %d:\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        mp = (n1 * 2 + n2 * 4 + n3 * 3) / 9;

        printf("Média ponderada: %.2f - ", mp);

        if (mp >= 7) {
            printf("Aprovado\n\n");
        } else {
            printf("Reprovado\n\n");
        }

        somaMedias = somaMedias + mp;
        i = i + 1;
    }

    mediaGeral = somaMedias / 50;
    printf("Média geral da turma: %.2f\n", mediaGeral);

    return 0;
}
