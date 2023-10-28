#include <stdio.h>

typedef struct
{
    int codigo;
    double preco;  
} Lanche;


int main(){

    Lanche tabela_precos[] = {
        {1, 4.00},
        {2, 4.50},
        {3, 5.00},
        {4, 2.00},
        {5, 1.50},
    };

    int codigo = 0;
    int quantidade = 0;
    double total = 0.0;

    scanf("%d", &codigo);
    scanf("%d", &quantidade);

    for (int i = 0; i < 5; i++){
        if(codigo == tabela_precos[i].codigo){
            total = tabela_precos[i].preco * quantidade;
            break;
        }
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}