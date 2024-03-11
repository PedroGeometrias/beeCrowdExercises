#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        scanf("%d", &N); 
        unsigned long long fib[N + 1]; 
        fib[0] = 0;
        fib[1] = 1;
        
        for (int i = 2; i <= N; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        
        printf("Fib(%d) = %llu\n", N, fib[N]); 
    }
    
    return 0;
}

