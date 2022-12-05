#include <stdio.h>

float somatorio(float * vetor, int tamanho);

int main(void) {
    int n;
    printf("numero de elementos:\n");
    scanf("%d", &n);
    float vetor[n]; 
    for(int i = 0; i < n; i++) {
        printf("digite o elemento %d:\n", i+1);
        scanf("%f", vetor + i);
    }
    printf("%g ", vetor[0]);
    for(int i = 1; i < n; i++)
        printf("+ %g ", vetor[i]);
    printf("= %g\n", somatorio(vetor, n));
    return 0;
}

float somatorio(float * vetor, int tamanho) {
    float s = 0;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    return s;
}