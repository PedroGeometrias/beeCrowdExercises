// CODE BY pedroGeometrias
// ID -> 1142
#include <stdio.h>

int main() {
    int N, i, count = 1;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("%d %d %d PUM\n", count, count + 1, count + 2);
        count += 4;
    }

    return 0;
}

