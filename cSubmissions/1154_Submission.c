#include <stdio.h>

int main(){
    float num1,sum = 0, count = 0;
    while(scanf("%f", &num1), num1>=0){
        count++;
        sum += num1; 
    }
    printf("%.2f\n", sum/count);
    return 0;
}
