#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float somar(float * vetor, int tamanho);
float variancia (float * vetor, int tam);


int main(void) {
    int n;
    printf("digite o numero de elementos:\n");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++) {
        printf("digite o elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    printf("media =  %g e desvio = %g",somar(vetor,n)/n,sqrt(variancia(vetor,n)));

    
}

float somar(float * vetor, int tamanho) {
    float s = 0;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    return s;
}
float variancia (float * vetor, int tam) {
    float sum = 0.0;
    float som = 0.0;
    float media = somar(vetor,tam)/tam;

    int y = 0;

    for(y;y<tam;y++)
    {
        som= vetor[y]- media;
        sum += (som*som);
    }
    
    return sum/tam;
