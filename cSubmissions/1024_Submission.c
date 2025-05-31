#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    if(scanf("%d%*c",&n)!=1) return 0;
    char s[1001];
    while(n--){
        if(!fgets(s,sizeof s,stdin)) break;
        size_t len=strcspn(s,"\n");
        s[len]='\0';
        for(size_t i=0;i<len;++i)
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
                s[i]+=3;
        for(size_t l=0,r=len-1;l<r;++l,--r){
            char tmp=s[l];
            s[l]=s[r];
            s[r]=tmp;
        }
        for(size_t i=len/2;i<len;++i) s[i]-=1;

        puts(s);
    }
    return 0;
}

