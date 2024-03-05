// CODE BY pedroGeometrias
// ID -> 1144
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        printf("%d %d %d\n", i, (int)pow(i, 2), (int)pow(i, 3));
        printf("%d %d %d\n", i, (int)pow(i, 2) + 1, (int)pow(i, 3) + 1);
    }

    return 0;
}

