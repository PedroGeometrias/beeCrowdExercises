// CODE BY pedroGeometrias
// ID -> 2386
#include <stdio.h>

int main(void) {
  int A=0, N=0, B=0, C=0;
  scanf("%i%i", &A, &N);
  for(int i=0;i<N;i++){
  scanf("%i", &B);
  B *= A;
  if(B>=40000000){
    C += 1;
  }
  }
  printf("%i\n", C);
  return 0;
}
