// CODE BY pedroGeometrias
// ID -> 1143
#include <stdio.h>

int main(){
    int num, i = 0;
    scanf("%d", &num);
    for(i =1;i <= num;++i){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}

