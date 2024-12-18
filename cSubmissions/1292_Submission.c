#include <stdio.h>
#include <math.h>  

int main() {
    double input;
    while (scanf("%lf", &input) != EOF) {
        double result = input * sin(108 * M_PI / 180.0) / sin(63 * M_PI / 180.0);
        printf("%.10lf\n", result);
    }
    return 0;
}

