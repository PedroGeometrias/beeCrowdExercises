// CODE BY pedroGeometrias
// ID -> 1178
#include <stdio.h>

int main(){
    double x;
    scanf("%lf", &x);
    double arr[100];
    arr[0] = x;
    for(int i = 1 ; i < 100; ++i){
        x /= 2;
        arr[i] = x;
    }
    for(int i = 0; i < 100; ++i){
        printf("N[%d] = %.4lf\n", i, arr[i]);
    }
    return 0;
}
