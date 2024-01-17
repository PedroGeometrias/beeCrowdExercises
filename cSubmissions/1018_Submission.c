// CODE BY pedroGeometrias
// ID -> 1018
#include <stdio.h>
enum notas{
nota100 = 100, nota50 = 50, nota20 = 20, nota10 = 10, nota5 = 5, nota2 = 2, nota1 = 1
}notas;
int main(void) {
  int in;
  int cont1 = 0 , cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, cont7 = 0;
  scanf("%d", &in);
  int newResult = in;
  while(1){
    if(in - nota100>=0){
      cont1++;
      in -= nota100;
      continue;
    }if(in - nota50 >= 0){
      cont2++;
      in -= nota50;
      continue;
    }if(in - nota20 >= 0){
      cont3++;
      in -= nota20;
      continue;
    }if(in - nota10 >= 0){
      cont4++;
      in -= nota10;
      continue;
    }if(in - nota5 >= 0){
      cont5++;
      in -= nota5;
      continue;
    }if(in - nota2 >= 0){
      cont6++;
      in -= nota2;
      continue;
    }if(in - nota1 >= 0){
      cont7++;
      in -= nota1;
      continue;
    }else{
      break;
    }
  }
  printf("%d\n", newResult);
  printf("%d nota(s) de R$ 100,00\n", cont1);
  printf("%d nota(s) de R$ 50,00\n", cont2);
  printf("%d nota(s) de R$ 20,00\n", cont3);
  printf("%d nota(s) de R$ 10,00\n", cont4);
  printf("%d nota(s) de R$ 5,00\n", cont5);
  printf("%d nota(s) de R$ 2,00\n",cont6);
  printf("%d nota(s) de R$ 1,00\n", cont7);
  return 0;
}
