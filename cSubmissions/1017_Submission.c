// CODE BY pedroGeometrias
// ID -> 1017
#include <stdio.h>
#define GASTO 12
int main(void) {
  int horas, velMedia;
  scanf("%d %d", &horas, &velMedia);
  printf("%.3f\n", (float)(horas*velMedia)/GASTO);
  return 0;
}
