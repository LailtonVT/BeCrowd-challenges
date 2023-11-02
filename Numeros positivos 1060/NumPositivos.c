#include <stdio.h>

int main(){
    int numPositivos = 0;
    double numeros = 0.0;

    for(int i = 0; i < 6; i++){
        scanf("%lf", &numeros);
        if(numeros > 0){
            numPositivos++;
        }
    }

    printf("%d valores positivos\n", numPositivos);

    return 0;
}