#include <stdio.h>

void divisor(int * vetor, int tamanho, int referencia);

int main(void) {
    int n, ref;
    printf("numero de elementos:\n");
    scanf("%d", &n);
    int vetor[n]; 
    for(int i = 0; i < n; i++) {
        printf("informe o %dº elemento:\n", i+1);
        scanf("%d", vetor+i);
    }
    printf("numero referencial: \n");
    scanf("%d", &ref);
    divisor(vetor, n, ref);
    return 0;
}

void divisor(int * vetor, int tamanho, int referencia) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if(referencia % vetor[i] == 0)
            printf("#");
        printf(" ");
    }
    printf("\n");
}