#include <stdio.h>

int main(int argc, char *argv[]){
    int x, y;
    int sum = 0;
    scanf("%d %d", &x, &y);
    if(y > x){
        int temp = x;
        x = y;
        y = temp;
    } 
    for (int i = y; i <= x; ++i) {
        if (i % 13 != 0) {
            sum += i;
        } 
    }
    printf("%d\n", sum);
    return 0; 
}
