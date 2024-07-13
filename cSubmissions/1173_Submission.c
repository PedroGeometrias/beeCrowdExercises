// CODE BY pedroGeometrias
// ID -> 1173
#include <stdio.h>

int main() {
    int V;
    scanf("%d", &V);

    int N[10];
    N[0] = V;

    for (int i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}

