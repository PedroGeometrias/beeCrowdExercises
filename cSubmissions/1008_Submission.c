// CODE BY pedroGeometrias
// ID -> 1008
#include <stdio.h>
int main(void) {
  float num,hrs,val;
  scanf("%f %f %f", &num, &hrs, &val);
  float SALARIO = hrs*val;
  printf("NUMBER = %.0f\n", num);
  printf("SALARY = U$ %.2f\n", SALARIO);
  return 0;
}
