// CODE BY pedroGeometrias
// ID -> 1043
#include <stdio.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    (a < b + c) && (b < a + c) && (c < a + b)? printf("Perimetro = %.1lf\n",a+b+c) : printf("Area = %.1lf\n", ((a+b)*c)/2);
    return 0;
}
