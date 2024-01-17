// CODE BY pedroGeometrias
// ID -> 1042
#include <stdio.h>

void swapValues(int *pX, int *pY);
void printArr(int sisArr[], int tamanho);
void recursiveBubbleSort(int arr[], int tamanho);

int main(){
    int n = 3,arr[n], i =0,sisArr[n];
    for(i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    
    for(i = 0; i < n; ++i)
        sisArr[i] = arr[i];

    recursiveBubbleSort(arr, n-1);

    for(i =0; i < n;++i)
        printf("%d\n", arr[i]);
    
    printf("\n");

    printArr(sisArr, n);
    return 0;
}

void printArr(int sisArr[], int tamanho){
    for(int i = 0; i < tamanho; ++i)
        printf("%d\n",sisArr[i]);
}

void swapValues(int *pX, int *pY){
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

void recursiveBubbleSort(int arr[], int tamanho){
    if(tamanho < 1) return;
    for(int i = 0; i < tamanho;++i){
        if(arr[i]>arr[i+1]){
            swapValues(&arr[i], &arr[i+1]);
        }
    recursiveBubbleSort(arr, tamanho - 1);    
    }
}

