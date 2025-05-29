// CODE BY pedroGeometrias
// ID -> 1429
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fat(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fat(n - 1);
    }
}
int main() {
    char num[6];
    while (1) {
        scanf("%s", num);
        if (strcmp(num, "0") == 0) {
            break;
        }
        int len = strlen(num);
        int sum = 0;
        for (int i = 0; i < len; i++) {
            int digit = num[len - 1 - i] - '0';
            sum += digit * fat(i + 1);
        }
        printf("%d\n", sum);
    }
    return 0;
}
