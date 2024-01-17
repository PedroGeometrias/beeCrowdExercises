// CODE BY pedroGeometrias
// ID -> 1036
#include <stdio.h>
#include <math.h>

void quadraticFormula() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float delta;

    if (a <= 0) {
        printf("Impossivel calcular\n");
    } else {
        delta = (b * b) - (4 * a * c);
        if (delta > 0) {
            float r2 = ((-b - sqrt(delta)) / (2 * a));
            float r1 = ((-b + sqrt(delta)) / (2 * a));
            printf("R1 = %.5f\n", r1);
            printf("R2 = %.5f\n", r2);
        } else {
            printf("Impossivel calcular\n");
        }
    }
}

int main(void) {
    quadraticFormula();
    return 0;
}

