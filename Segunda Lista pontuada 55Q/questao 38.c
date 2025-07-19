#include <stdio.h>

int main() {
    int i, j, primo;
    float produto = 1;

    i = 92;
    while (i <= 1478) {
        primo = 1;
        if (i <= 1) {
            primo = 0;
        } else {
            j = 2;
            while (j < i) {
                if (i % j == 0) {
                    primo = 0;
                }
                j = j + 1;
            }
        }

        if (primo == 1) {
            produto = produto * i;
        }

        i = i + 1;
    }

    printf("Produto dos números primos entre 92 e 1478: %.0f\n", produto);

    return 0;
}
