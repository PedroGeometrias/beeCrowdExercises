// CODE BY pedroGeometrias
// ID -> 1183
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    char operation;
    int index = 1;
    float (*arr)[12] = malloc(sizeof(float[12][12]));
    scanf("%c", &operation);
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            scanf("%f", &arr[i][j]);
            if ( j > i && j != 1) {
            arr[0][1] += arr[i][j];
                index ++;
            }
        }
    }
    printf("%.1f\n",(operation == 'M')?arr[0][1]/index:arr[0][1]);
    free(arr);
    return 0;
}


