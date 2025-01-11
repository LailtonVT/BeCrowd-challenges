#include <stdio.h>

int main() {
    // Variável do tipo char para armazenar o caractere ASCII
    char ch;

    // Imprime cabeçalho da tabela ASCII
    printf("Tabela ASCII\n");
    printf("+--------+------------+\n");
    printf("| Decimal| Caractere  |\n");
    printf("+--------+------------+\n");

    // Loop para percorrer os caracteres ASCII imprimíveis
    for (int i = 32; i < 128; ++i) {
        ch = i; // Atribui o valor de i à variável char

        // Imprime uma linha horizontal separando cada novo valor
        printf("+--------+------------+\n");

        // Imprime o valor decimal e o caractere correspondente em forma de tabela
        printf("|   %3d  |     %c      |\n", i, ch);
    }
    
    // Imprime a linha horizontal final
    printf("+--------+------------+\n");

    return 0;
}

