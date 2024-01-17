// CODE BY pedroGeometrias
// ID -> 1011
#include <stdio.h>

#define PI  3.14159
int main(void) {
  double R;
  scanf("%lf", &R);
  double volume = (4.0/3)*PI*(R*R*R);
  printf("VOLUME = %.3lf\n", volume);
  return 0;
}
