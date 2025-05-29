// CODE BY pedroGeometrias
// ID -> 1434
#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N), N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int value = 1 + (
                    (i < j ? i : j) < (N - 1 - i < N - 1 - j ? N - 1 - i : N - 1 - j)
                    ? (i < j ? i : j)
                    : (N - 1 - i < N - 1 - j ? N - 1 - i : N - 1 - j)
                );
                printf("%3d", value);
                if (j != N - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

