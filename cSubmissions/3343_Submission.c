// CODE BY pedroGeometrias
// ID -> 3343
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int x_tamanho, num_titas;
    scanf("%d %d", &num_titas, &x_tamanho);

    char titas[num_titas++];
    scanf("%s", titas);

    int pequeno, medio, grande;
    scanf("%d %d %d", &pequeno, &medio, &grande);

    int* max_muralhas = (int*)malloc(sizeof(int) * num_titas);
    memset(max_muralhas, -1, sizeof(max_muralhas[0]) * num_titas);

    int temp = 0;
    max_muralhas[0] = x_tamanho;
    int current_size = 0;
    for(int i = 0; i < num_titas; i++){

        if(titas[i] == 'P'){
            current_size = pequeno;
        }else if(titas[i] == 'M'){
            current_size = medio;
        }else{
            current_size = grande;
        }
        for(int j = 0; j < num_titas; j++){
            if(max_muralhas[j] == -1){
                temp++;
                max_muralhas[j] = x_tamanho - current_size;
            }
            if(max_muralhas[j] >= current_size){
                max_muralhas[j] -= current_size;
                break;
            }
        } 

    }
        printf("%d\n", temp);
    return 0;
}
