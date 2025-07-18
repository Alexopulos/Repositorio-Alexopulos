#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, media, maior, pesoMaior = 4.0, pesoOutros = 3.0;

    printf("Digite o código do aluno (negativo para sair): ");
    scanf("%d", &codigo);

    while(codigo >= 0) {
        printf("Digite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        maior = n1;
        if(n2 > maior) {
            maior = n2;
        }
        if(n3 > maior) {
            maior = n3;
        }

        if(maior == n1) {
            media = (n1*pesoMaior + n2*pesoOutros + n3*pesoOutros) / 10;
        } else if(maior == n2) {
            media = (n2*pesoMaior + n1*pesoOutros + n3*pesoOutros) / 10;
        } else {
            media = (n3*pesoMaior + n1*pesoOutros + n2*pesoOutros) / 10;
        }

        printf("Codigo: %d - Notas: %.1f %.1f %.1f - Media: %.2f - ", codigo, n1, n2, n3, media);

        if(media >= 5.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }

        printf("Digite o código do aluno (negativo para sair): ");
        scanf("%d", &codigo);
    }

    return 0;
}
