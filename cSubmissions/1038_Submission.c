// CODE BY pedroGeometrias
// ID -> 1038
#include <stdio.h>
int main(){
  float cachorroQuente = 4,salada = 4.50, bacon = 5, torrada = 2, refri = 1.50;
  int type, quantidade;
  scanf("%d %d", &type, &quantidade);
  switch (type) {
    case 1 : printf("Total: R$ %.2f\n", quantidade*cachorroQuente); break;
    case 2 : printf("Total: R$ %.2f\n", quantidade*salada);break;
    case 3 : printf("Total: R$ %.2f\n", quantidade*bacon);break;
    case 4 : printf("Total: R$ %.2f\n", quantidade*torrada);break;
    case 5 : printf("Total: R$ %.2f\n", quantidade*refri);break;
  } 
  return 0;
}
