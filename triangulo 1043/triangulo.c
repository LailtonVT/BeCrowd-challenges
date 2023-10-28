#include <stdio.h>

double calculaTriangulo(double a, double b, double c){
    return a + b + c;
}
double calculaTrapezio(double a, double b, double c){
    return (c / 2) * (a + b);
}

int main(){
    double a,b,c;
    double resultado = 0.0;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        resultado = calculaTriangulo(a,b,c);
        printf("Perimetro = %.1lf\n", resultado);
    }else{
        resultado = calculaTrapezio(a,b,c);
        printf("Area = %.1lf\n", resultado);
    }


    return 0;
}