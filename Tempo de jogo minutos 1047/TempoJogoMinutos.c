#include <stdio.h>

int main(){
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int duracaoHoras, duracaoMinutos;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    int minutosInicial = horaInicial * 60 + minutoInicial;
    int minutosFinal = horaFinal * 60 + minutoFinal;

    int diferecnaMinutos = minutosFinal - minutosInicial;

    if(diferecnaMinutos <= 0){
        diferecnaMinutos += 24 * 60;
    }

    duracaoHoras = diferecnaMinutos / 60;
    duracaoMinutos = diferecnaMinutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHoras, duracaoMinutos);

    return 0;
}