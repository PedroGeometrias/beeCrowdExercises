// CODE BY pedroGeometrias
// ID -> 1858
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 0;
	scanf("%d", &x);
	int *arr = malloc(sizeof(int) * x);
	for(int i = 0; i < x; ++i){
		scanf("%d", &arr[i]);	
	}
	int temp = arr[0];
	for(int i = 0; i < x; ++i){
		if(temp >= arr[i]){
			temp = arr[i];
		}
	}
	for(int i = 0; i < x; ++i){
		if(temp == arr[i]){
			printf("%d\n", ++i);
			break;
 		}
	}
free(arr);
    	return 0;
}
