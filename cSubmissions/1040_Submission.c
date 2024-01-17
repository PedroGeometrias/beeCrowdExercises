// CODE BY pedroGeometrias
// ID -> 1040
#include <stdio.h>
enum peso{
peso1 = 2,
peso2 = 3,
peso3 = 4,
peso4 = 1,
};
int main(){
  float n1,n2,n3,n4, notaDoExame;
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  int somaDosPesos = peso1+peso2+peso3+peso4;
  float media = n1*peso1+n2*peso2+n3*peso3+peso4*n4;
  float mediaFinal = media/somaDosPesos;
  printf("Media: %.1f\n", mediaFinal);
  if(mediaFinal < 5.0){
    printf("Aluno reprovado.\n");
  }if(mediaFinal>=7.0) {
    printf("Aluno aprovado.\n");
  }if(mediaFinal>=5.0 && mediaFinal<=6.9){
    printf("Aluno em exame.\n");
    scanf("%f", &notaDoExame);
    printf("Nota do exame: %.1f\n", notaDoExame);   
    float novaNota = (notaDoExame+mediaFinal)/2;
    if(novaNota>=5.0){
      printf("Aluno aprovado.\n");
    }if(novaNota<=4.9){
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", novaNota);
  }
}
