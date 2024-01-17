#include <stdio.h>

int main() {
    int X, Y, sum_of_odds = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    for (int num = X + 1; num < Y; num++) {
        if (num % 2 != 0) {
            sum_of_odds += num;
        }
    }

    printf("%d\n", sum_of_odds);

    return 0;
}

