// CODE BY pedroGeometrias
// ID -> 1161
#include <stdio.h>

long long getFactorial(int num) {
    long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int M, N;

    while (scanf("%d %d", &M, &N) != EOF) {
        long long factorialM = getFactorial(M);
        long long factorialN = getFactorial(N);
        long long SomaDosFatoriais = factorialM + factorialN;
        printf("%lld\n", SomaDosFatoriais);
    }

    return 0;
}

