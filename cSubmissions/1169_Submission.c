// CODE BY pedroGeometrias
// ID -> 1169
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  unsigned long long total;  
  int i;

  for (i = 0; i < n; i++) {
    int tamanhoDoTabuleiro;
    scanf("%d", &tamanhoDoTabuleiro);

    total = 0; 
    unsigned long long numeroDeGraos = 1;

    while (tamanhoDoTabuleiro > 0) {
      total += numeroDeGraos;
      numeroDeGraos *= 2;
      tamanhoDoTabuleiro--;
    }

    total /= 12;

    printf("%llu kg\n", total/1000);
  }

  return 0;
}

