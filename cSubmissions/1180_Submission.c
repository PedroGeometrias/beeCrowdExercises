// CODE BY pedroGeometrias
// ID -> 1180
#include <stdlib.h>
#include <stdio.h>

int main(){
    int N;
    int temp;
    int posi;
    scanf("%d", &N);
    int* X = malloc(sizeof(int) * N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &X[i]);
    }
    temp = X[0];
    posi = 0;
    for(int i = 1; i < N; ++i){
        if(X[i] < temp){
            temp = X[i];
            posi = i;
        }
    }
    printf("Menor valor: %d\n", temp);
    printf("Posicao: %d\n", posi);
    free(X); 
    return 0;
}

