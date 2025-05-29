// CODE BY pedroGeometrias
// ID -> 1848
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char str[3];
    int i = 0, sum = 0;
    int num[8];
    while(i <3){
        scanf("%s", str);
        if(strcmp(str, "caw ") != 0){
            i++;
        }else{
            for(int j = 0; j < 3; ++j){
                if(str[j]== '*'){
                    num[j]=1;      
                }else{
                    num[j] = 0;
                }
            }
        }
    }
    while(i < 3){
        for(int j = 0; j < 3; j++){
            if (num[j] == 1){
                num[j] *= 2 ;
            }
            if(j == 0){
                num[j] /= 2;
            }
        }
    }
    
    return 0;
}
