#include <stdio.h>

int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    r < 0 ? (b > 0 ? (q -= 1, r += b) : (q += 1, r -= b)) : 0;
    printf("%d %d\n", q, r);    
    return 0;
}

