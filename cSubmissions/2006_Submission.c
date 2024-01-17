// CODE BY pedroGeometrias
// ID -> 2006
#include <stdio.h>

int main(void) {
  int T, A, B, C, D, E,i =0;
  scanf("%i", &T);
  scanf("%i%i%i%i%i", &A, &B, &C, &D, &E);
  if(T==A){
    i++;
  }if(T==B){
    i++;
  }
  if(T==C){
    i++;
  }if(T==D){
    i++;
  }if(T==E){
    i++;
  }
  printf("%i\n", i);
  return 0;
}
