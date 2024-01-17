// CODE BY pedroGeometrias
// ID -> 3048
#include <stdio.h>

int main(void) {
  int A=0, B=0, C=0, D=0;
  scanf("%i", &A);
  for(int i =0; i<A;i++){
    scanf("%d", &B);
    if(B!=C){
      D += 1;
    }
    C = B;
  }
  printf("%i\n", D);
  return 0;
}
