#include <stdio.h>

int main() {
    int i, sexo, qtdMulheres = 0;
    float altura, maior = 0, menor = 1000, somaMulheres = 0, somaTurma = 0;

    for(i = 1; i <= 50; i++) {
        printf("Digite o sexo (1-M / 2-F): ");
        scanf("%d", &sexo);
        printf("Digite a altura em cm: ");
        scanf("%f", &altura);

        if(altura > maior) {
            maior = altura;
        }

        if(altura < menor) {
            menor = altura;
        }

        if(sexo == 2) {
            somaMulheres += altura;
            qtdMulheres++;
        }

        somaTurma += altura;
    }

    printf("Maior altura da turma: %.2f cm\n", maior);
    printf("Menor altura da turma: %.2f cm\n", menor);
    if(qtdMulheres > 0) {
        printf("Média da altura das mulheres: %.2f cm\n", somaMulheres / qtdMulheres);
    } else {
        printf("Nenhuma mulher foi registrada.\n");
    }
    printf("Média da altura da turma: %.2f cm\n", somaTurma / 50);

    return 0;
}
