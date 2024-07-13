// CODE BY pedroGeometrias
// ID -> 1145
#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 0, count = 1; count <= y; ++i) {
        for (int j = 1; j <= x && count <= y; ++j, ++count) {
            if (j > 1) {
                printf(" ");
            }
            printf("%d", count);
        }
        printf("\n");
    }
    return 0;
}

