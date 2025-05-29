// CODE BY pedroGeometrias
// ID -> 1296
#include <stdio.h>
#include <math.h>

int main() {
    double m1, m2, m3;
    while(scanf("%lf %lf %lf", &m1, &m2, &m3) == 3){
        double s = (m1 + m2 + m3) / 2.0;
        double radicand = s * (s - m1) * (s - m2) * (s - m3);
        if(radicand <= 0){
            printf("-1.000\n");
            continue;
        }
        double area = (4.0 / 3.0) * sqrt(radicand);
        printf("%.3lf\n", area);
    }
    return 0;
}

