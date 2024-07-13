// CODE BY pedroGeometrias
// ID -> 1151
#include <stdio.h>

void foo(int n) {
    int num1 = 0, num2 = 1, temp, i;
    for (i = 0; i < n; i++) {
        if (i <= 1)
            temp = i;
        else {
            temp = num1 + num2;
            num1 = num2;
            num2 = temp;
        }
        printf("%d", temp);
        if (i != n - 1) {
            printf(" ");
        }
    }  
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    foo(n);
    printf("\n");
    return 0;
}

