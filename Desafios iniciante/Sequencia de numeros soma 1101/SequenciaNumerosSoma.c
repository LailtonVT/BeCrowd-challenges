#include <stdio.h>

int main(){
    int N = 0, M = 0;
    int soma = 0;

    scanf("%d %d", &N, &M);

    if(M < N){
        int temp = M;
        M = N;
        N = temp;
    }

    do{
        for(int i = N; i <= M; i++){
            printf("%d", i);

            
        }
        

    }while(N <= 0 || M <= 0);


    return 0;
}