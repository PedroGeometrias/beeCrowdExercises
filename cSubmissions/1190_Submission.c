// CODE BY pedroGeometrias
// ID -> 1190
#include <stdio.h>
#include <stdlib.h>

int main() {
    char operation;
    float (*arr)[12] = malloc(sizeof(float[12][12]));
    scanf(" %c", &operation);
    for (int i = 0; i < 12; ++i)
        for (int j = 0; j < 12; ++j)
            scanf("%f", &arr[i][j]);

    float sum = 0.0f;
    int count = 0;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (j > i && j > 11 - i) {
                sum += arr[i][j];
                count++;
            }
        }
    }
    printf("%.1f\n", (operation == 'M') ? sum / count : sum);
    free(arr);
    return 0;
}

