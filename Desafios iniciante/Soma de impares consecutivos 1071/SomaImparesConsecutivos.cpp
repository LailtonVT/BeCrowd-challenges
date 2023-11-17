#include <iostream>

using namespace std;

int main(){
    int x = 0, y = 0;
    int somaImpares = 0;

    cin >> x >> y;

    //condicao para garantir que x sempre sera menor que y
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            somaImpares += i;
        }
    }

    cout << somaImpares << endl;

    return 0;
}