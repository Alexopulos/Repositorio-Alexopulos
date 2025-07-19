#include <stdio.h>


int bissexto(int ano) {
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
        return 1;
    } else {
        return 0;
    }
}


int diasDesdeInicio(int dia, int mes, int ano) {
    int i, totalDias = 0;
    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    
    for (i = 0; i < ano; i++) {
        if (bissexto(i)) {
            totalDias = totalDias + 366;
        } else {
            totalDias = totalDias + 365;
        }
    }

    
    for (i = 0; i < mes - 1; i++) {
        totalDias = totalDias + diasMes[i];
    }

    
    if (mes > 2 && bissexto(ano)) {
        totalDias = totalDias + 1;
    }

    
    totalDias = totalDias + dia;

    return totalDias;
}

int main() {
    int d1, m1, a1, d2, m2, a2;
    int totalDias1, totalDias2, diff;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    totalDias1 = diasDesdeInicio(d1, m1, a1);
    totalDias2 = diasDesdeInicio(d2, m2, a2);

    diff = totalDias2 - totalDias1;
    if (diff < 0) {
        diff = -diff;
    }

    printf("Diferença entre as datas: %d dia(s)\n", diff);

    return 0;
}
