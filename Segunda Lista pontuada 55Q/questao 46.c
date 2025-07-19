#include <stdio.h>

int main() {
    int i = 1, idade, maiorIdade = 0;
    char sexo, olhos, cabelos;
    int countMulheresEspeciais = 0;

    while (i <= 500) {
        printf("\nPessoa %d:\n", i);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A=Azuis, V=Verdes, C=Castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L=Louros, C=Castanhos, P=Pretos): ");
        scanf(" %c", &cabelos);

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (sexo == 'F' || sexo == 'f') {
            if (idade >= 18 && idade <= 35) {
                if ((olhos == 'V' || olhos == 'v') && (cabelos == 'L' || cabelos == 'l')) {
                    countMulheresEspeciais = countMulheresEspeciais + 1;
                }
            }
        }

        i = i + 1;
    }

    printf("\nMaior idade do grupo: %d\n", maiorIdade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", countMulheresEspeciais);

    return 0;
}

