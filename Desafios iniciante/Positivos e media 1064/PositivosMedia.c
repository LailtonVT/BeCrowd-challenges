#include <stdio.h>

int main() {
    int numPositivos = 0;
    double numeros = 0.0;
    double somaPositivos = 0.0;
    double media = 0.0;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &numeros);
        if (numeros > 0) {
            numPositivos++;
            somaPositivos += numeros; 
        }
    }

    if (numPositivos > 0) {
        media = somaPositivos / numPositivos; 
    }

    printf("%d valores positivos\n", numPositivos);
    printf("%.1lf\n", media);

    return 0;
}
