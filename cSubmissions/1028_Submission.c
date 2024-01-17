// CODE BY pedroGeometrias
// ID -> 1028
#include <stdio.h>

int returnFatoracao(int x, int y){
if (x % y == 0){
return y;
}else{
return returnFatoracao(y,x % y);
}
}

int main(){
    int num, x, y;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n", returnFatoracao(x, y));
    }
    return 0;
}
