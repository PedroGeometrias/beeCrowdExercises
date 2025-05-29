// CODE BY pedroGeometrias
// ID -> 1202
#include <stdio.h>
int mod_from_binary(const char *s, int mod){
    int result = 0;
    for(int i = 0; s[i]; ++i){
        result = (result * 2 + (s[i] - '0')) % mod;
    }
    return result;
}

int main(){
    int cases;
    char num[10000];
    scanf("%d", &cases);
    while(cases--){
        scanf("%s", num);
        int val = mod_from_binary(num, 1500);
        long long a = 0, b = 1, c;
        for(int i = 2; i <= val; i++){
            c = (a + b) % 1000;
            a = b;
            b = c;
        }
        if(b < 10){
            printf("00%lld\n", b);

        }else if(b < 100){
            printf("0%lld\n", b);
        }else{
            printf("%lld\n", b);
        }
    }
    return 0;
}
