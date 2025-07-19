#include <stdio.h>

int main() {
    int i, numero, maisAltoNum = 0, maisBaixoNum = 0;
    int altura, maisAltoAltura = 0, maisBaixoAltura = 1000;

    for(i = 1; i <= 5; i++) {
        printf("Digite o número do aluno: ");
        scanf("%d", &numero);
        printf("Digite a altura em cm: ");
        scanf("%d", &altura);

        if(altura > maisAltoAltura) {
            maisAltoAltura = altura;
            maisAltoNum = numero;
        }

        if(altura < maisBaixoAltura) {
            maisBaixoAltura = altura;
            maisBaixoNum = numero;
        }
    }

    printf("Aluno mais alto: %d com %d cm\n", maisAltoNum, maisAltoAltura);
    printf("Aluno mais baixo: %d com %d cm\n", maisBaixoNum, maisBaixoAltura);

    return 0;
}
