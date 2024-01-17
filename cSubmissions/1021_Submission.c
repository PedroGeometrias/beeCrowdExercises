// CODE BY pedroGeometrias
// ID -> 1021
#include <stdio.h>

enum notas {
    nota100 = 100, nota50 = 50, nota20 = 20, nota10 = 10, nota5 = 5, nota2 = 2, Moeda1 = 1
};

int main(void) {
    double in;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, cont7 = 0, cont8 = 0, cont9 = 0, cont10 = 0, cont11 = 0, cont12 = 0;
    scanf("%lf", &in);  

    int cents = (int)(in * 100);

    while (1) {
        if (cents - (nota100 * 100) >= 0) {
            cont1++;
            cents -= (nota100 * 100);
            continue;
        }
        if (cents - (nota50 * 100) >= 0) {
            cont2++;
            cents -= (nota50 * 100);
            continue;
        }
        if (cents - (nota20 * 100) >= 0) {
            cont3++;
            cents -= (nota20 * 100);
            continue;
        }
        if (cents - (nota10 * 100) >= 0) {
            cont4++;
            cents -= (nota10 * 100);
            continue;
        }
        if (cents - (nota5 * 100) >= 0) {
            cont5++;
            cents -= (nota5 * 100);
            continue;
        }
        if (cents - (nota2 * 100) >= 0) {
            cont6++;
            cents -= (nota2 * 100);
            continue;
        }
        if (cents - (Moeda1 * 100) >= 0) {
            cont7++;
            cents -= (Moeda1 * 100);
            continue;
        }
        if (cents - 50 >= 0) {
            cont8++;
            cents -= 50;
            continue;
        }
        if (cents - 25 >= 0) { 
            cont9++;
            cents -= 25;
            continue;
        }
        if (cents - 10 >= 0) { 
            cont10++;
            cents -= 10;
            continue;
        }
        if (cents - 5 >= 0) { 
            cont11++;
            cents -= 5;
            continue;
        }
        if (cents - 1 >= 0) { 
            cont12++;
            cents -= 1;
            continue;
        } else {
            break;
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cont1);
    printf("%d nota(s) de R$ 50.00\n", cont2);
    printf("%d nota(s) de R$ 20.00\n", cont3);
    printf("%d nota(s) de R$ 10.00\n", cont4);
    printf("%d nota(s) de R$ 5.00\n", cont5);
    printf("%d nota(s) de R$ 2.00\n", cont6);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", cont7);
    printf("%d moeda(s) de R$ 0.50\n", cont8);
    printf("%d moeda(s) de R$ 0.25\n", cont9);
    printf("%d moeda(s) de R$ 0.10\n", cont10);
    printf("%d moeda(s) de R$ 0.05\n", cont11);
    printf("%d moeda(s) de R$ 0.01\n", cont12);

    return 0;
}
