#include <stdio.h>

int main() {
    float num1, num2;
    int verification;

    do {
        do {
            scanf("%f", &num1);
            if (num1 < 0 || num1 > 10) {
                printf("nota invalida\n");
            }
        } while (num1 < 0 || num1 > 10);

        do {
            scanf("%f", &num2);
            if (num2 < 0 || num2 > 10) {
                printf("nota invalida\n");
            }
        } while (num2 < 0 || num2 > 10);

        printf("media = %.2f\n", (num1 + num2) / 2);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &verification);
        } while (verification != 1 && verification != 2);

        num1 = num2 = 0;
    } while (verification != 2);

    return 0;
}

