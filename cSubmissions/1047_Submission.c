// CODE BY pedroGeometrias
// ID -> 1047
#include <stdio.h>
#define MAX_HOURS 24
#define MAX_MIN 60
int main() {
    int hrInicial, hrFinal, minInicial, minFinal, duracaoDasHrs, duracaoDosMin;
    scanf("%d %d %d %d", &hrInicial, &minInicial, &hrFinal, &minFinal);
    if (hrInicial == hrFinal && minInicial == minFinal) {
        
        duracaoDasHrs = 24;
        duracaoDosMin = 0;
    } else {
        duracaoDasHrs = (hrFinal - hrInicial + MAX_HOURS) % MAX_HOURS;

        if (minFinal >= minInicial) {
            duracaoDosMin = minFinal - minInicial;
        } else {
            duracaoDosMin = MAX_MIN - minInicial + minFinal;
            duracaoDasHrs = (duracaoDasHrs - 1 + MAX_HOURS) % MAX_HOURS; 
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoDasHrs, duracaoDosMin);
    return 0;
}
