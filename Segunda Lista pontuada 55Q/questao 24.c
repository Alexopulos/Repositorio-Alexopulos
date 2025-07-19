#include <stdio.h>

int main() {
    int idade, sexo;
    char olhos, cabelos;
    int qtd = 0, idadeMax = 0;

    printf("Digite a idade (-1 para encerrar): ");
    scanf("%d", &idade);

    while(idade != -1) {
        printf("Digite o sexo (1-M / 2-F): ");
        scanf("%d", &sexo);

        printf("Digite a cor dos olhos (A-azuis, V-verdes, C-castanhos): ");
        scanf(" %c", &olhos);

        printf("Digite a cor dos cabelos (L-louros, C-castanhos, P-pretos): ");
        scanf(" %c", &cabelos);

        if(idade > idadeMax) {
            idadeMax = idade;
        }

        if(sexo == 2 && idade >= 18 && idade <= 35 && olhos == 'V' && cabelos == 'L') {
            qtd++;
        }

        printf("Digite a idade (-1 para encerrar): ");
        scanf("%d", &idade);
    }

    printf("Maior idade do grupo: %d\n", idadeMax);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", qtd);

    return 0;
}
