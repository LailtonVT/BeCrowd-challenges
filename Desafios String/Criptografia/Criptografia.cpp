#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string codificaLinha(const string &linha){
    string codificaLinha = linha;

    for(char &c : codificaLinha){
        if(isalpha(c)){
            if(islower(c)){
                c = ((c - 'a' + 3) % 26) + 'a';
            }else{
                c = ((c - 'A' + 3) % 26) + 'A';
            }
        }
    }

    reverse(codificaLinha.begin(), codificaLinha.end());

    int metade = codificaLinha.length() / 2;
    for(int i = metade; i < codificaLinha.length(); i++){
        if(isalpha(codificaLinha[i])){
            if(islower(codificaLinha[i])){
                codificaLinha[i] = (codificaLinha[i] - 'a' - 1) + 'a';
            }else{
                codificaLinha[i] = (codificaLinha[i] - 'A' - 1) + 'A';
            }
        }
    }
    return codificaLinha;
}



int main(){
    int N;
    cin >> N;
    cin.ignore(); // Para consumir a quebra de linha após o valor de N

    while (N--) {
        string linha;
        getline(cin, linha);
        string linhaCodificada = codificaLinha(linha);
        cout << linhaCodificada << endl;
    }

    return 0;
}