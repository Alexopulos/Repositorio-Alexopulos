#include <stdio.h>

int ehPrimo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int count = 0;
    int num = 1;

    printf("20 primeiros números primos (incluindo 1,2,3):\n");

    while (count < 20) {
        if (num == 1 || ehPrimo(num)) {  // inclui o 1 conforme o enunciado
            printf("%d ", num);
            count = count + 1;
        }
        num = num + 1;
    }

    printf("\n");

    return 0;
}


