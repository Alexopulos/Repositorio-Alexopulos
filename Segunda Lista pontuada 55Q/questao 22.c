#include <stdio.h>

int main() {
    int idade, sexo, mulheres100 = 0, qtd = 0;
    float salario, somaSalario = 0, maior = 0, menor = 1000;

    printf("Digite a idade (negativa para encerrar): ");
    scanf("%d", &idade);

    while(idade >= 0) {
        printf("Digite o sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);
        printf("Digite o salário: ");
        scanf("%f", &salario);

        somaSalario += salario;
        if(idade > maior) {
            maior = idade;
        }
        if(idade < menor) {
            menor = idade;
        }
        if(sexo == 2 && salario <= 100.0) {
            mulheres100++;
        }
        qtd++;

        printf("Digite a idade (negativa para encerrar): ");
        scanf("%d", &idade);
    }

    if(qtd > 0) {
        printf("Média salarial: %.2f\n", somaSalario / qtd);
        printf("Maior idade: %.0f\n", maior);
        printf("Menor idade: %.0f\n", menor);
        printf("Mulheres com salário até R$100: %d\n", mulheres100);
    } else {
        printf("Nenhum dado informado.\n");
    }

    return 0;
}
