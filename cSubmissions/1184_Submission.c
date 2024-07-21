// CODE BY pedroGeometrias
// ID -> 1184
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char operation;
    int index = 1;
    float (*arr)[12] = malloc(sizeof(float[12][12]));
    scanf("%c", &operation);
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            scanf("%f", &arr[i][j]);
            if ( j < i && i != 1) {
            arr[1][0] += arr[i][j];
                index ++;
            }
        }
    }
    printf("%.1f\n",(operation == 'M')?arr[1][0]/index:arr[1][0]);
    free(arr);
    return 0;
}
