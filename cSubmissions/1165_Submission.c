// CODE BY pedroGeometrias
// ID -> 1165
#include <stdio.h>

int primo(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int N;
    scanf("%d", &N); 

    while (N--) {
        int X;
        scanf("%d", &X); 
        
        if (primo(X)) {
            printf("%d eh primo\n", X); 
        } else {
            printf("%d nao eh primo\n", X); 
        }
    }

    return 0;
}

