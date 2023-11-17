#include <stdio.h>
#include <math.h>

double calculaDelta(double a, double b, double c){
    return pow(b, 2) - 4 * a * c; 
}

double calculaRaizReal1(double a, double b, double c){
    double delta = calculaDelta(a, b, c);
    if (delta >= 0) {
        return (-b + sqrt(delta)) / (2 * a);  
    } else {
        return 0.0;  // Correção: Tratar caso de delta negativo
    }
}

double calculaRaizReal2(double a, double b, double c){
    double delta = calculaDelta(a, b, c);
    if (delta >= 0) {
        return (-b - sqrt(delta)) / (2 * a);  
    } else {
        return 0.0;  
    }
}

int main(){
    double variavel[3];  
    double raiz1, raiz2;
   

    for (int i = 0; i < 3; i++){  
        scanf("%lf", &variavel[i]);
    }

    if (variavel[0] <= 0 || calculaDelta(variavel[0], variavel[1], variavel[2]) < 0) {
        printf("Impossivel calcular\n");
    } else {
       
        raiz1 = calculaRaizReal1(variavel[0], variavel[1], variavel[2]);
        raiz2 = calculaRaizReal2(variavel[0], variavel[1], variavel[2]);

        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }

    return 0;
}
