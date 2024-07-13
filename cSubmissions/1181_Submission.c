#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char operation;
    int line;
    float (*arr)[12] = malloc(sizeof(float[12][12]));
    scanf("%d %c", &line, &operation);
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            scanf("%f", &arr[i][j]);
            if (i == line && j) arr[line][0] += arr[line][j];
        }
    }
    printf("%.1f\n",(operation == 'M')?arr[line][0]/12:arr[line][0]);
    free(arr);
    return 0;
}

