// CODE BY pedroGeometrias
// ID -> 1933
#include <stdio.h>

int main(void) {
  int A, B, C;
  scanf("%i%i", &A, &B);
  if(A==B){
    printf("%d\n", A);
  }
  else{
    if(A>B){
    printf("%d\n", A);
    }
    else{
      printf("%d\n", B);
    }
  }
  return 0;
}
