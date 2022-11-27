#include <stdio.h>

int main(){
    int X, soma;
    printf("Digite X\n");
    scanf("%d",&X);
    soma = X;

    while(X != 1){
        
        if(X % 2 == 0){
            X = X/2;
            soma = soma + X;
        }
        else{
            X = 3*X + 1;
            soma = soma + X;
        }

    }

    printf("soma = %d",soma);



    return 0;
}