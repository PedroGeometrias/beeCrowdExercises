#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    int N;
    while (scanf("%d", &N) != EOF) {
        int (*arr)[N] = malloc(sizeof(int[N][N]));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if(i == j && i == (N / 2) && N%2!=0){
                    arr[i][j] = 2;
                }
                else if (i == j) {
                    arr[i][j] = 1;
                } 
                else if (i + j == N - 1) {
                    arr[i][j] = 2;
                } else {
                    arr[i][j] = 3;
                }
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
        free(arr);
    }
    return 0;
}
