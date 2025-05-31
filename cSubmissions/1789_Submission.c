#include <stdio.h>
int main(){
int num = 0, x = 0, maior_nivel = 0;
while(scanf("%d", &num) == 1){
int temp = 0;
	for(int i = 0; i < num; i++){
		scanf("%d", &x);
		if(temp < x){
			 temp = x;
		}
	}
maior_nivel = temp > 10? temp < 20? 2: 3 : 1;
printf("%d\n", maior_nivel);
}
return 0;
}
