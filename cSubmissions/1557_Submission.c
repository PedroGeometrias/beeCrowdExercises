#include <stdio.h>
#include <math.h>
int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        int largest = (int)pow(2, (N - 1) * 2);
        int T = 1;
        int temp = largest;
        while (temp > 0) {
            T++;
            temp /= 10;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int value = (int)pow(2, i + j);
                if (j == 0) {
                    printf("%*d", T, value);
                } else {
                    printf(" %*d", T, value);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

