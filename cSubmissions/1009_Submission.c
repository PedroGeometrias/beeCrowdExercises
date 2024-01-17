// CODE BY pedroGeometrias
// ID -> 1009
#include <stdio.h>
int main(void) {
  char nome[50];
  scanf("%s", nome);
  double salFixo, numVendas;
  scanf("%lf", &salFixo);
  scanf("%lf", &numVendas);
  printf("TOTAL = R$ %.2lf\n", salFixo+(numVendas*0.15));
  return 0;
}
