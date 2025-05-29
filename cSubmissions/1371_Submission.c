// CODE BY pedroGeometrias
// ID -> 1371
#include <stdio.h>
int main(){
	int x = 0;
	while(1){
		scanf("%d", &x);
		if(x == 0){
			break;
		}
		int i = 1;
		while(i * i <= x){
			printf("%d ", i * i);
			++i;
		}
		printf("\n");	
	}
	return 0;
}
