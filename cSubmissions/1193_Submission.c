// CODE BY pedroGeometrias
// ID -> 1193
#include <stdio.h>
int *reverse(int arr[], int x){
    int y = 0, w = x - 1;
    while(y < w){
        int temp = arr[y];
        arr[y] = arr[w];
        arr[w] = temp; 
        y++;
        w--;
    }
    return arr;
}
char *dec(int x){
    int bin[32];
    static char rev_bin[33]; 
    rev_bin[0] = '\0';

    int i = 0;
    while(x > 0) {
        bin[i++] = x % 2;
        x /= 2;
    }

    reverse(bin, i);

    for(int j = 0; j < i; j++){
        rev_bin[j] = '0' + bin[j];
    }
    rev_bin[i] = '\0';
    return rev_bin;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        char val[32], fmt[4];
        scanf("%s %s", val, fmt);

        int num;

        if(fmt[0] == 'd'){
            sscanf(val, "%d", &num);
            printf("Case %d:\n", i);
            printf("%x hex\n", num);
            printf("%s bin\n", dec(num));
        } else if(fmt[0] == 'h'){
            sscanf(val, "%x", &num);
            printf("Case %d:\n", i);
            printf("%d dec\n", num);
            printf("%s bin\n", dec(num));
        } else if(fmt[0] == 'b'){
            num = 0;
            for(int j = 0; val[j]; j++){
                num = num * 2 + (val[j] - '0');
            }
            printf("Case %d:\n", i);
            printf("%d dec\n", num);
            printf("%x hex\n", num);
        }

        printf("\n");
    }

    return 0;
}

