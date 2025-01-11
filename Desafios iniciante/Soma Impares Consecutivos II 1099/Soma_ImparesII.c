#include <stdio.h>

int main(){

    int n;
    int x = 0, y = 0;
    int soma;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        scanf("%d %d", &x, &y);
        soma = 0;

        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }

        for (int j = x + 1; j < y; j++){
            if(j % 2 != 0){
                soma += j;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}