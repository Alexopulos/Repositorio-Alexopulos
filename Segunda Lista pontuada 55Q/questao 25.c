#include <stdio.h>

int main() {
    int codigo;
    float preco, novoPreco, somaSem = 0, somaCom = 0;
    int qtd = 0;

    printf("Digite o código do produto (negativo para encerrar): ");
    scanf("%d", &codigo);

    while(codigo >= 0) {
        printf("Digite o preço de custo: ");
        scanf("%f", &preco);

        novoPreco = preco * 1.20;

        printf("Código: %d - Novo preço: R$%.2f\n", codigo, novoPreco);

        somaSem += preco;
        somaCom += novoPreco;
        qtd++;

        printf("Digite o código do produto (negativo para encerrar): ");
        scanf("%d", &codigo);
    }

    if(qtd > 0) {
        printf("Média dos preços SEM aumento: R$%.2f\n", somaSem / qtd);
        printf("Média dos preços COM aumento: R$%.2f\n", somaCom / qtd);
    } else {
        printf("Nenhum produto foi informado.\n");
    }

    return 0;
}
