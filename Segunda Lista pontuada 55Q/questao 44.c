#include <stdio.h>

int main() {
    int i = 1;
    int cod, veiculos, acidentes;
    char estado[3];

    int maiorIndice = -1;
    int menorIndice = 1000000;
    int codMaior = 0, codMenor = 0;

    int somaVeiculos = 0;
    int somaAcidentesRS = 0;
    int cidadesRS = 0;

    while (i <= 200) {
        printf("\nCidade %d:\n", i);

        printf("Código da cidade: ");
        scanf("%d", &cod);

        printf("Estado (ex: RS): ");
        scanf("%s", estado);

        printf("Número de veículos de passeio: ");
        scanf("%d", &veiculos);

        printf("Número de acidentes com vítimas: ");
        scanf("%d", &acidentes);

        if (acidentes > maiorIndice) {
            maiorIndice = acidentes;
            codMaior = cod;
        }

        if (acidentes < menorIndice) {
            menorIndice = acidentes;
            codMenor = cod;
        }

        somaVeiculos = somaVeiculos + veiculos;

        if (estado[0] == 'R' && estado[1] == 'S') {
            somaAcidentesRS = somaAcidentesRS + acidentes;
            cidadesRS = cidadesRS + 1;
        }

        i = i + 1;
    }

    float mediaVeiculos = somaVeiculos / 200.0;

    printf("\nMaior índice de acidentes: %d (Cidade %d)\n", maiorIndice, codMaior);
    printf("Menor índice de acidentes: %d (Cidade %d)\n", menorIndice, codMenor);
    printf("Média de veículos nas cidades: %.2f\n", mediaVeiculos);

    if (cidadesRS > 0) {
        float mediaRS = somaAcidentesRS / (float)cidadesRS;
        printf("Média de acidentes nas cidades do RS: %.2f\n", mediaRS);
    } else {
        printf("Nenhuma cidade do RS foi registrada.\n");
    }

    return 0;
}
