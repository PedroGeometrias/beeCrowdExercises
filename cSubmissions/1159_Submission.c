// CODE BY pedroGeometrias
// ID -> 1159
#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x) && x != 0) {
        if (x % 2 != 0)
            x++;

        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += (x + 2 * i);
        }
        printf("%d\n", sum);
    }
    return 0;
}

