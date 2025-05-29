// CODE BY pedroGeometrias
// ID -> 1199
#include <stdio.h>

int main(){
	while(1){
		int val;
		char num[64];
		scanf("%s", &num);
		if(num[0] == '0' && num[1] == 'x'){
            		sscanf(num, "%x", &val);
			if(val < 0){
				break;
			}
            		printf("%d\n", val);
		}else{
			sscanf(num, "%d", &val);
			if(val < 0){
				break;
			}
            		printf("0x%X\n", val);
		}
	}
    	return 0;
}
