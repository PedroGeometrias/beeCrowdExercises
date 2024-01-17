// CODE BY pedroGeometrias
// ID -> 1070
#include <stdio.h>

int main(void) {
  int X;
  scanf("%d", &X);
  if(X%2==0){
  for(int i = 1; i <=6;i++){
    if(X%2==0){
      X++;
      
    }else{
      X+=2;
    }
    printf("%d\n", X);
  }}
  else{
    printf("%d\n", X);
    for(int i = 2; i <=6;i++){
    if(X%2==0){
      X++;
      
    }else{
      X+=2;
    }
    printf("%d\n", X);
  }
  }
  return 0;
}
