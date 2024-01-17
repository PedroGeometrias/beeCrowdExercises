// CODE BY pedroGeometrias
// ID -> 2702
#include <stdio.h>

int main(void) {
  int A=0, B=0, C=0, D=0, E=0, F=0;
  scanf("%i%i%i%i%i%i", &A, &B, &C, &D, &E, &F);
  A -= D;
  B -= E;
  C -= F;
  if(A>0){
    A = 0;
  }
  if(B>0){
    B = 0;
  }
  if(C>0){
    C = 0;
  }
  A *= -1;
  B *= -1;
  C *= -1;
  printf("%d\n", A+B+C);
  return 0;
}
