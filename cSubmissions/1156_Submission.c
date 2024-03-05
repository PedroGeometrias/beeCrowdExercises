#include <stdio.h>

int main() {
    float sum = 0;
    int denominator = 1;
    for (int numerator = 1; numerator <= 39; numerator += 2) {
        sum += (float)numerator / denominator;
        denominator *= 2;
    }
    printf("%.2f\n", sum);
    return 0;
}
