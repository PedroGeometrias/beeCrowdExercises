// CODE BY pedroGeometrias
// ID -> 2344
#include <stdio.h>

int main(){
    int num;  
    scanf("%d", &num);
    if(num >= 1 && num <= 35){
        printf("D\n");
    }if(num >= 36 && num <= 60){
        printf("C\n");
    }if(num >= 61 && num <= 85){
        printf("B\n");
    }
    if(num >= 86 && num <= 100){
        printf("A\n");
    }if(num == 0){
        printf("E\n");
    }
    return 0;
}


