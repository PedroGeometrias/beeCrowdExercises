// CODE BY pedroGeometrias
// ID -> 1045
#include <stdio.h>

//    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
//    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
//    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
//    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
//    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO0
//    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

void changeValues(float *z, float *y);
void bubbleSort(float *x, int tamanho);
void userInterface();

int main(){
    userInterface(); 
    return 0;
}

void userInterface(){
    int i = 0, tamanho = 3;
    float lados[tamanho], verify = 0;
    for(i = 0; i < 3;++i){
        scanf("%f", &lados[i]);
    }
    bubbleSort(lados, tamanho);
    if(lados[0] >= lados[1]+lados[2]){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((lados[0] * lados[0]) > (lados[1] * lados[1])+(lados[2] * lados[2])){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(lados[0] * lados[0] == (lados[1] * lados[1])+(lados[2] * lados[2]))
        printf("TRIANGULO RETANGULO\n");
    if(lados[0] * lados[0] < (lados[1] * lados[1])+(lados[2] * lados[2]))
        printf("TRIANGULO ACUTANGULO\n");
    for(i = 0; i <= tamanho - 1;++i){
        verify += lados[i];
    }
    verify /= 3;
    if(verify == lados[0]){
        printf("TRIANGULO EQUILATERO\n");
    }else if(lados[0] == lados[1]||lados[0]==lados[2]||lados[1]==lados[2])
        printf("TRIANGULO ISOSCELES\n");

}

void changeValues(float *z, float *y){
    float temp = *z;
    *z = *y;
    *y = temp;
}
void bubbleSort(float *x, int tamanho){
   if(tamanho <= 0){
    return;
   }
   for(int i = 0; i<tamanho; ++i){
    if(x[i]<x[i+1])changeValues(&x[i], &x[i+1]);
   }
   return bubbleSort(x, tamanho - 1);
}
