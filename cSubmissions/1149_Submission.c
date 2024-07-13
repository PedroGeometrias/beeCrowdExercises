// CODE BY pedroGeometrias
// ID -> 1149
#include <stdio.h>

int sum(int a, int n) {
    int sum = 0;
    for (int i = a; i < a + n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int n, a;
    scanf("%d %d", &a, &n);
    while (n <= 0) {
        scanf("%d", &n);
    }
    printf("%d\n", sum(a, n));
    return 0;
}
