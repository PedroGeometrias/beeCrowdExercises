// CODE BY pedroGeometrias
// ID -> 2388
#include <stdio.h>

int main(void) {
  int A, B, C, D=0;
  scanf("%i", &A);
  for(int i=0;i<A;i++){
  scanf("%i%i", &B, &C);
  D = D +(B * C);
  }
  printf("%d\n", D);
  return 0;
}
