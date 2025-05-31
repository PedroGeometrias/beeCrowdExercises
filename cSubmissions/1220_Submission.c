#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        int *num = malloc(n * sizeof(int));
        int total = 0;
        for (int i = 0; i < n; i++) {
            int var, cents;
            scanf("%d.%d", &var, &cents);
            num[i] = var * 100 + cents;
            total += num[i];
        }

        int average = total / n;
        int remainder = total % n;

        int exchange = 0;
        for (int i = 0; i < n; i++) {
            if (num[i] > average) {
                int diff = num[i] - average;
                if (remainder > 0 && diff > 0) {
                    diff--;
                    remainder--;
                }
                exchange += diff;
            }
        }
        printf("$%d.%02d\n", exchange / 100, exchange % 100);
        free(num);
    }
    return 0;
}

