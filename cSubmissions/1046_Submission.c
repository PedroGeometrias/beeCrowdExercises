// CODE BY pedroGeometrias
// ID -> 1046
#include <stdio.h>

#define MAX_HOURS 24

int main() {
    int hrInicial, hrFinal, duracao;

    scanf("%d %d", &hrInicial, &hrFinal);

    duracao = (hrInicial == hrFinal) ? 24 : (hrInicial < hrFinal) ? (hrFinal - hrInicial) : (MAX_HOURS - hrInicial + hrFinal);

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}

