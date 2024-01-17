// CODE BY pedroGeometrias
// ID -> 1153
#include <stdio.h>
int getFatorial(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", getFatorial(a));
    return 0;
}

int getFatorial(int a){
    if(a <= 0){
        return 1;
    }else{
        return a*getFatorial(a-1);
    }

}

