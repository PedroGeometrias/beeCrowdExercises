// CODE BY pedroGeometrias
// ID -> 1012
#include <stdio.h>
#define PI 3.14159
#define DIV 2
int main(void) {
  
  float A,B,C;
  
  scanf("%f %f %f", &A, &B, &C);
  
  float areaTriangulo = (A*C)/DIV;
  float areaCirculo = PI*(C*C);
  float areaTrapezio = ((A+B)*C)/DIV;
  float areaQuadrado = B*B;
  float areaRetangulo = A*B;
  
  printf("TRIANGULO: %.3f\n", areaTriangulo);
  printf("CIRCULO: %.3f\n", areaCirculo);
  printf("TRAPEZIO: %.3f\n", areaTrapezio);
  printf("QUADRADO: %.3f\n",areaQuadrado);
  printf("RETANGULO: %.3f\n", areaRetangulo);
  
  return 0;
}
