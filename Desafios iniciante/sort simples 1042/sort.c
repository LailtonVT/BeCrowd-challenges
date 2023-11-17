#include <stdio.h>

int main() {
    int valores[3];
    int i, j, temp;

    
    for (i = 0; i < 3; i++) {
        scanf("%d", &valores[i]);
    }

    
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (valores[i] > valores[j]) {
                temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    
    for (i = 0; i < 3; i++) {
        printf("%d\n", valores[i]);
    }

    printf("\n");

    
    for (i = 0; i < 3; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
