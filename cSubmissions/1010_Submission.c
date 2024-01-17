// CODE BY pedroGeometrias
// ID -> 1010
#include <stdio.h>

int main(void){
    int codigoDePeca1, numDePeca1, codigoDePeca2, numDePeca2;
    float valDaPeca1, valDaPeca2;
    scanf("%d %d %f", &codigoDePeca1, &numDePeca1, &valDaPeca1); 
    scanf("%d %d %f", &codigoDePeca2, &numDePeca2, &valDaPeca2); 
    float valorAPagar = (numDePeca1*valDaPeca1)+(numDePeca2*valDaPeca2);
    printf("VALOR A PAGAR: R$ %.2f\n", valorAPagar);
    return 0;
}
