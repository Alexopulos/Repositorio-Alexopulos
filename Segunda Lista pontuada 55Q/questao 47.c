#include <stdio.h>

int main() {
    int i = 1;
    char nome[100];
    float valorCompra, bonus;

    while (i <= 150) {
        printf("\nCliente %d:\n", i);

        printf("Nome: ");
        scanf(" %[^\n]", nome); // Lê linha com espaços

        printf("Valor das compras no ano passado: ");
        scanf("%f", &valorCompra);

        if (valorCompra < 500000) {
            bonus = valorCompra * 0.10f;
        } else {
            bonus = valorCompra * 0.15f;
        }

        printf("Cliente: %s\n", nome);
        printf("Valor da compra: %.2f\n", valorCompra);
        printf("Bônus: %.2f\n", bonus);

        i = i + 1;
    }

    return 0;
}

