#include <stdio.h>
#include <stdlib.h>

typedef
    long int
llint;

double media(llint * v, int n);

int main(void){
    int n, j;
    llint * vetor;
    printf("Quantos elementos deseja? ");
    scanf("%d", &n);
    vetor = (llint*) malloc(n * sizeof(llint));
    printf("Qual o elemento inicial? ");
    scanf("%d", &j);
    vetor[0] = j;
    for(int i = 1; i < n; i++){
        vetor[i] = (j + 2);
        j = j + 2;
    }
    double a = 0;
    a = media(vetor, n);
    printf("penultimo elemento: %d\n", vetor[n - 2]);
    printf("media: %lg", a/n);
    return 0;
}

double media(llint * v, int n){
    llint m = 0;
    for(int i = 0; i < n; i++){
        m += v[i];
    }
   return m;
}