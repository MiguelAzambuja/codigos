#include <stdio.h>

int main(){
    int i, n;
    printf("Digite um numero\n");
    scanf("%d",&n);

    for (i = 1; i <= n; ++i){
        if(n % i == 0){
            printf("divide por: %d\n",i);
        }
        else{
            continue;
        }

    }
    return 0;
}