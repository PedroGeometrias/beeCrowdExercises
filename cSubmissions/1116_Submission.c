// CODE BY pedroGeometrias
// ID -> 1116
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        } else {
            double div = (double)x / y;
            printf("%.1lf\n", div);
        }
    }

    return 0;
}

