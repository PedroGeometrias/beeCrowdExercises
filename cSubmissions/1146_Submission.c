// CODE BY pedroGeometrias
// ID -> 1146
#include <stdio.h>

int main(int argc, char *argv[]){
    int x;
    while(scanf("%d", &x), x !=0 ){
        for (int i = 1; i <= x; ++i) {
            printf("%d", i);
            if(i != x){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
