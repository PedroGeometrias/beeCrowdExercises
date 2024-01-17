// CODE BY pedroGeometrias
// ID -> 1020
#include <stdio.h> 


int main(void){
    int n, contHrs = 0, contMin = 0, contSeg = 0;
    scanf("%d", &n);
    while(1){
            if(n-365>=0){
                contHrs++;
                n-=365;
                continue;
            }
            if(n-30>=0){
                contMin++;
                n-=30;
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
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", contHrs, contMin, contSeg);
    
    return 0;
}
