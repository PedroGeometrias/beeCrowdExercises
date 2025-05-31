#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char a[20], b[20];
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%s %s", a, b);
        if(strcmp(a,b)==0){
            printf("Caso #%d: De novo!\n", i);
            continue;
        }
        if((strcmp(a,"tesoura")==0 && (strcmp(b,"papel")==0 || strcmp(b,"lagarto")==0))||
           (strcmp(a,"papel")==0 && (strcmp(b,"pedra")==0 || strcmp(b,"Spock")==0))||
           (strcmp(a,"pedra")==0 && (strcmp(b,"lagarto")==0 || strcmp(b,"tesoura")==0))||
           (strcmp(a,"lagarto")==0 && (strcmp(b,"Spock")==0 || strcmp(b,"papel")==0))||
           (strcmp(a,"Spock")==0 && (strcmp(b,"tesoura")==0 || strcmp(b,"pedra")==0))){
            printf("Caso #%d: Bazinga!\n", i);
        }else{
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    return 0;
}
