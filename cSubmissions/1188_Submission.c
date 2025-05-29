// CODE BY pedroGeometrias
// ID -> 1188
#include <stdio.h>

int main() {
    char operation;
    scanf(" %c", &operation); 

    float M[12][12];
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            scanf("%f", &M[i][j]);
        }
    }

    float result = 0.0f;
    int count = 0;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (i > 6 && j > 11 - i && j < i) {
                result += M[i][j];
                count++;
            }
        }
    }

    if (operation == 'S') {
        printf("%.1f\n", result); 
    } else if (operation == 'M' && count > 0) {
        printf("%.1f\n", result / count); 
    } 

    return 0;
}

