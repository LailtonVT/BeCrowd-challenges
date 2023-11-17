#include <stdio.h>

int main(){
    int horaInicial = 0;
    int horaFinal = 0;

    scanf("%d %d", &horaInicial, &horaFinal);

    if(horaFinal <= horaInicial){
        horaFinal += 24;
    }

    int tempoJogo = horaFinal - horaInicial;

    printf("O JOGO DUROU %d HORA(S)\n", tempoJogo);

    return 0;
}