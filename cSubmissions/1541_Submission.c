// CODE BY pedroGeometrias
// ID -> 1541
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    int per, side1, side2;
    while(1){
        scanf("%d", &side1);
        if(side1 == 0){
            break;
        }
        scanf("%d %d", &side2, &per);
        side1 *= side2;
        side1 /= ((float)per / 100);
        side1 = sqrt(side1);
        printf("%d\n",side1);
    }
    return 0;
}
