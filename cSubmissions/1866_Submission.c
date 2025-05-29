// CODE BY pedroGeometrias
// ID -> 1866
#include <stdio.h>
 
int main() {
    int x, y;
    scanf("%d", &x);
    while(x--){
        scanf("%d", &y);
        printf("%d\n", y %2);
    }
 
    return 0;
}
