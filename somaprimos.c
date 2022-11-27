#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool verificaprimos(int n){
    for(int i =2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    if(n==1){
            return false;
        }

    return true;
    
}
    

int main(){
    int n,f;
    int soma = 0;
    scanf("%d", &f);
    scanf("%d", &n);
    for(int f; f <= n; f++){
        if(verificaprimos(f)){
            soma += f;
        }
    }
    printf("%d", soma);
    return 0;
}
