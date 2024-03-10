#include <stdio.h>

int main(){
    int y, x, n, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d %d", &x, &y);
        sum = 0;
        int start = (x % 2 == 0) ? x + 1 : x; 
        for(int j = 0 ; j < y; ++j){
            sum += start + 2*j;         
        }
        printf("%d\n", sum);
    }
    return 0;
}

