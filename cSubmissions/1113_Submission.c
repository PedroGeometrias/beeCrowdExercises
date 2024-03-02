#include <stdio.h>

int main(int argc, char *argv[]){
    int x, y;
    while (1) {
        scanf("%d %d", &x, &y);
        if (x == y) {
            break;
        }
        x > y ? printf("Decrescente\n") : printf("Crescente\n");
    }
    return 0;
}
