#include <iostream>

int main() {
    // Declaração da variável para armazenar o valor inteiro X
    int X;

    // Leia o valor inteiro X
    std::cin >> X;

    // Verifique se X é par e torne-o ímpar, se necessário
    if (X % 2 == 0) {
        X += 1;
    }

    // Imprima os 6 valores ímpares consecutivos a partir de X
    for (int i = 0; i < 6; ++i) {
        std::cout << X << std::endl;
        X += 2;
    }

    return 0;
}
