#include <stdio.h>

int main() {
    int i = 1;
    int sexo, idade;
    float altura;

    int somaIdadeTotal = 0;
    float somaAlturaMulheres = 0;
    int total = 0;
    int totalHomens = 0;
    int totalMulheres = 0;
    int somaIdadeHomens = 0;
    int faixa18a35 = 0;

    while (i <= 1000) {
        printf("\nPessoa %d:\n", i);

        printf("Sexo (0=feminino, 1=masculino): ");
        scanf("%d", &sexo);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        somaIdadeTotal = somaIdadeTotal + idade;

        if (sexo == 0) {
            totalMulheres = totalMulheres + 1;
            somaAlturaMulheres = somaAlturaMulheres + altura;
        } else if (sexo == 1) {
            totalHomens = totalHomens + 1;
            somaIdadeHomens = somaIdadeHomens + idade;
        }

        if (idade >= 18 && idade <= 35) {
            faixa18a35 = faixa18a35 + 1;
        }

        total = total + 1;
        i = i + 1;
    }

    float mediaIdadeGrupo = somaIdadeTotal / (float)total;
    float mediaAlturaMulheres = 0;
    float mediaIdadeHomens = 0;
    float percentualFaixa = faixa18a35 * 100.0 / total;

    if (totalMulheres > 0) {
        mediaAlturaMulheres = somaAlturaMulheres / totalMulheres;
    }

    if (totalHomens > 0) {
        mediaIdadeHomens = somaIdadeHomens / (float)totalHomens;
    }

    printf("\nMédia da idade do grupo: %.2f\n", mediaIdadeGrupo);
    printf("Média da altura das mulheres: %.2f\n", mediaAlturaMulheres);
    printf("Média da idade dos homens: %.2f\n", mediaIdadeHomens);
    printf("Percentual de pessoas entre 18 e 35 anos: %.2f%%\n", percentualFaixa);

    return 0;
}

