#include <stdio.h>
//this algo was taken from here btw:
//https://en.wikipedia.org/wiki/Primality_test
int modular_pow(int base, int exponent, int modulus) {
    long long result = 1;
    long long b = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * b) % modulus;
        }
        b = (b * b) % modulus;
        exponent = exponent / 2;
    }
    return (int)result;
}
int isPrime(int p) {
    if (p <= 1) return 0;
    if (p == 2) return 1;
    int res = modular_pow(2, p - 1, p);
    if (res != 1) return 0;
    else return 1;
}
int main() {
    int x;
    scanf("%d", &x);
    for(int i = 0; i < x; ++i){
        int n;
        scanf("%d", &n);
        isPrime(n)? printf("Prime\n") : printf("Not Prime\n");
    }
    return 0;
}
