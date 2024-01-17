// CODE BY pedroGeometrias
// ID -> 1019
#include <stdio.h> 


int main(void){
    int n, contHrs = 0, contMin = 0, contSeg = 0;
    scanf("%d", &n);
    while(1){
            if(n-3600>=0){
                contHrs++;
                n-=3600;
                continue;
            }
            if(n-60>=0){
                contMin++;
                n-=60;
                continue;
            }
            if(n-1>=0){
                contSeg++;
                n-=1;
                continue;
            }else{
                break;
            }
    } 
    printf("%d:%d:%d\n", contHrs, contMin, contSeg);
    
    return 0;
}
