#include <stdio.h>

int main() {
    float salario, somaSalario = 0;
    int filhos, totalPessoas = 0, somaFilhos = 0, abaixo100 = 0;
    float maiorSalario = 0;

    printf("Digite o salario (negativo para parar): ");
    scanf("%f", &salario);

    while(salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if(salario > maiorSalario) {
            maiorSalario = salario;
        }

        if(salario <= 100.0) {
            abaixo100++;
        }

        printf("Digite o salario (negativo para parar): ");
        scanf("%f", &salario);
    }

    if(totalPessoas > 0) {
        printf("Media salarial: %.2f\n", somaSalario / totalPessoas);
        printf("Media de filhos: %.2f\n", (float)somaFilhos / totalPessoas);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual com salario até R$100,00: %.2f%%\n", (float)abaixo100 / totalPessoas * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
