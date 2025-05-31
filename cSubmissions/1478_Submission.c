#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int value = abs(i - j) + 1;
                if (j == 0) {
                    printf("%3d", value);
                } else {
                    printf(" %3d", value);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

