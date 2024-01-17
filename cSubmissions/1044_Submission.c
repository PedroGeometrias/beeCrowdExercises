// CODE BY pedroGeometrias
// ID -> 1044
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x<y)
        (x+y)%x==0?printf("Sao Multiplos\n"):printf("Nao sao Multiplos\n");
    else
        (x+y)%y==0?printf("Sao Multiplos\n"):printf("Nao sao Multiplos\n");
    
    return 0;
}

