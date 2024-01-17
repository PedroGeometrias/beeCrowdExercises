// CODE BY pedroGeometrias
// ID -> 1013
#include <stdio.h>
#include <stdlib.h>
#define DIV 2
int main(void) {
  int x,y,z;
  scanf("%d %d %d", &x, &y, &z);
  int maiorValXY = (x+y+abs(x-y))/DIV;
  int maiorVal = (maiorValXY + z +abs(z-maiorValXY))/DIV;
  printf("%d eh o maior\n", maiorVal);
  return 0;
}
