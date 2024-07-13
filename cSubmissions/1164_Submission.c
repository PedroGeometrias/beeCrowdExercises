// CODE BY pedroGeometrias
// ID -> 1164
#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int N, X;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        
        if (isPerfect(X)) {
            printf("%d eh perfeito\n", X);
        } else {
            printf("%d nao eh perfeito\n", X);
        }
    }
    
    return 0;
}

