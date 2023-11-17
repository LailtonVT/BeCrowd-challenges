#include <stdio.h>
#include <math.h>

void trocar(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double lados[3];

    for (int i = 0; i < 3; i++) {
        scanf("%lf", &lados[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (lados[i] < lados[j]) {
                trocar(&lados[i], &lados[j]);
            }
        }
    }

    if (lados[0] >= lados[1] + lados[2]) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(lados[0], 2) == pow(lados[1], 2) + pow(lados[2], 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(lados[0], 2) > pow(lados[1], 2) + pow(lados[2], 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(lados[0], 2) < pow(lados[1], 2) + pow(lados[2], 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (lados[0] == lados[1] && lados[1] == lados[2]) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (lados[0] == lados[1] || lados[1] == lados[2] || lados[0] == lados[2]) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
