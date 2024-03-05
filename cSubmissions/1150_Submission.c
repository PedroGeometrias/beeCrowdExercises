#include <stdio.h>

int main(){
    int x, z, sum = 0, count = 0;
    scanf("%d %d", &x, &z);

    while (z <= x) {
        scanf("%d", &z);
    }

    while (sum <= z) {
        sum += x + count;
        count++;
    }

    printf("%d\n", count);

    return 0;
}

