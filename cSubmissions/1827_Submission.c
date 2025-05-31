#include <stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int inner=n/3;
        int center=n/2;

        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                int v;
                if(i==center&&j==center)
                    v=4;
                else if(i>=inner&&i<n-inner
                     &&j>=inner&&j<n-inner)
                    v=1;
                else if(i==j)
                    v=2;
                else if(j==n-1-i)
                    v=3;
                else
                    v=0;

                printf("%d",v);
            }
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}

