// CODE BY pedroGeometrias
// ID -> 2061
#include <stdio.h>
#include <string.h>
#define SIZE 6
int main() {
    int x, y, i = 0;
    char acoes[SIZE];
    scanf("%d %d", &x, &y);
    for(i = 0; i < y; ++i){
        scanf("%s", acoes);
        if(strcmp(acoes, "fechou") == 0 ){
            ++x;
        }else{
            --x;
        }
    }
    printf("%d\n", x);
       return 0;
}

