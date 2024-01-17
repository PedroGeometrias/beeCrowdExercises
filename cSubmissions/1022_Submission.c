// CODE BY pedroGeometrias
// ID -> 1022
#include <stdio.h>
//Soma: (N1*D2 + N2*D1) / (D1*D2)
//Subtração: (N1*D2 - N2*D1) / (D1*D2)
//Multiplicação: (N1*N2) / (D1*D2)
//Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
int getGcd(int x, int y);
int main(){
    int nume1,nume2,den1,den2, newDen = 0, newNum = 0, casosTeste = 0, gcd = 0;
    char operador;
    scanf("%d", &casosTeste);
    while(casosTeste--){
    scanf("%d / %d %c %d / %d", &nume1, &den1, &operador, &nume2, &den2);
    switch (operador) {
        case '+' : newNum = (nume1*den2)+(nume2*den1);
                   newDen = (den1*den2);break;
        case '*' : newNum = (nume1*nume2);
                   newDen = (den1*den2);break;
        case '/' : newNum = (nume1*den2);
                   newDen = (nume2*den1);break;
        case '-' : newNum = (nume1*den2)-(nume2*den1);
                   newDen = (den1*den2);break; 
     }
     gcd = getGcd(newNum, newDen);
     if(gcd<0){
        gcd*=-1;
     }
     printf("%d/%d = %d/%d\n", newNum, newDen,newNum/gcd,newDen/gcd);
    }
    return 0;
}

int getGcd(int x, int y){
    if(y==0){
        return x;
    }else{
        return getGcd(y, x % y);
    }
}
