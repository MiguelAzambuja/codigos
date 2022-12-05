#include <stdio.h>

int main(){

    int n, tam = 0;
    int K = 0;
    printf("numero de termos do vetor:\n");
    scanf("%d", &n);
    int vetor[n];


    for(int i=0; i < n; i++) {
        printf("num: ", i+1);
        scanf("%d", vetor+i);  
        if(vetor[i]>= 0)
            K += 1;
    }

    int res[K];
    tam = K;

    if(!K){
        printf("vazio");
    }
    else{
        K = 0;
        for(int i=0; i < n; i++) {
            if(vetor[i]>=0){
                res[K] = vetor[i];
                K += 1;
            }
        }
    }

    for(int i=0; i < tam; i++) {
        if(i+1 == tam){
            printf("%d ", res[i]);
            break;
        }
        printf("%d, ", res[i]);
    }
return 0;
}
