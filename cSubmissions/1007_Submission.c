// CODE BY pedroGeometrias
// ID -> 1007
#include <stdio.h>
int main(void) {
  int A, B, C, D;
  scanf("%d %d %d %d", &A, &B, &C, &D);
  A*=B;
  C*=D;
  int DIFERENCA = A-C;
  printf("DIFERENCA = %d\n", DIFERENCA);
  return 0;
}

