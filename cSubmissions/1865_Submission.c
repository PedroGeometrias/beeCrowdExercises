// CODE BY pedroGeometrias
// ID -> 1865
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    int x, n;
    scanf("%d", &x);
    char name[50];
    for(int i = 0; i < x; ++i){
        scanf("%s %d\n", name, &n);
        strcmp(name, "Thor")==0?printf("Y\n"):printf("N\n");
    }
    return 0;
}
