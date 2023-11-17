#include <iostream>
#include <math.h>

using namespace std;

int calculaQuadrado(int N){
    return pow(N,2);
}

int main(){
    int N;
    int resultado;

    cin >> N;
    
    for(int i = 1; i <= N; i++){
        if(i % 2 == 0){
            resultado = calculaQuadrado(i);
            cout << i << "^2 = " << resultado << endl;
        }
    }


    return 0;
}