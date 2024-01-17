// CODE BY pedroGeometrias
// ID -> 1060
#include <stdio.h>
#define MAX_TAMANHO 6
int main(){
    float arr[MAX_TAMANHO];
    int i = 0, cont = 0;
    for(i = 0; i < MAX_TAMANHO; ++i){
        scanf("%f", &arr[i]);
    }
    for(i = 0; i < MAX_TAMANHO; ++i){   
        if(arr[i] > 0){
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
    return 0;
}

