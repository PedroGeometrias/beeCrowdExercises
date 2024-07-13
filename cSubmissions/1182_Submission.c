// CODE BY pedroGeometrias
// ID -> 1182
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char operation;
    int column;
    float (*arr)[12] = malloc(sizeof(float[12][12]));
    scanf("%d %c", &column, &operation);
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            scanf("%f", &arr[i][j]);
            if (j == column && i) arr[0][column] += arr[i][column];
        }
    }
    printf("%.1f\n",(operation == 'M')?arr[0][column]/12:arr[0][column]);
    free(arr);
    return 0;
}

