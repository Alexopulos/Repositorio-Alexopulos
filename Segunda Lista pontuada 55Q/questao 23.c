#include <stdio.h>

int main() {
    int idade;
    char sexo;
    char olhos[10];
    char cabelos[10];

    printf("Digite os dados do habitante (idade negativa para encerrar):\n");

    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade < 0) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (azuis, verdes, castanhos): ");
        scanf("%s", olhos);

        printf("Cor dos cabelos (louros, castanhos, pretos): ");
        scanf("%s", cabelos);

        // Aqui, se quiser, pode armazenar ou processar os dados
        // Por enquanto só vamos ler e deixar para analisar no próximo exercício
        printf("Dados registrados.\n\n");
    }

    printf("Entrada de dados encerrada.\n");

    return 0;
}
