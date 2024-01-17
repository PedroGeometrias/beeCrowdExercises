// CODE BY pedroGeometrias
// ID -> 1170
#include <stdio.h>

int countDays(float comida);

int main() {
    int casosTest;
    float comida;

    scanf("%d", &casosTest);

    while (casosTest--) {
        scanf("%f", &comida);
        int days = countDays(comida);
        printf("%d dias\n", days);
    }

    return 0;
}

int countDays(float x) {
    int days = 0;

    while (x > 1) {
        x /= 2;
        days++;
    }

    return days;
}


