// CODE BY pedroGeometrias
// ID -> 1015
#include <stdio.h>

int main(void) {
  int X, Y;
  do{
  scanf("%d %d", &X, &Y);
    if(X>0&&Y>0){
    printf("primeiro\n");
    }else if(X<0&&Y>0){
    printf("segundo\n");
    }else if(X>0&&Y<0){
    printf("quarto\n");
    }else if(X<0&&Y<0){
    printf("terceiro\n");
    }
    }while(X!=0||Y!=0);
  return 0;
}
