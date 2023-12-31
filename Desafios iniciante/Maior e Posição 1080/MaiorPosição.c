#include <stdio.h>

int main(){

    int valores[100];
    int maior = 0;
    int posicao = 0;

    for (int i = 0; i < 100; i++){
        scanf("%d", &valores[i]);

        if(valores[i] > maior){
        maior = valores[i];
        posicao = i + 1;  
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}