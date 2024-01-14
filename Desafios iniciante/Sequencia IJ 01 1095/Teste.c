#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int soma = 0;
    int temp = n;
    
    while(temp > 0){
        int digito = temp % 10;
        soma += digito;
        temp /= 10;
    }
    printf("%d\n", soma);
    
    return 0;
}