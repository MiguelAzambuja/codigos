#include <stdio.h>
#include <stdlib.h>

void fibo (unsigned long long int sequencia[], int numero);
void txt(unsigned long long int sequencia[], int numero);

int main(void) {
    int numero;
    scanf("%d", &numero);
    unsigned long long int sequencia[numero];

    if (numero > 94) printf("O intervalo deve ser de 0 a 94");

    else {
        fibo(sequencia, numero);
        txt(sequencia, numero);
        printf("%llu", sequencia[numero - 1]);
    }

    return 0;
}

void fib (unsigned long long int sequencia[], int numero) {
    unsigned long long int j = 0 ;
    unsigned long long int i = 1 ;
    int count = 0;

    for(unsigned long long int k = 0 ; numero > 0  ; j = i , i = k, numero--, count++){
        k = j + i ;
        sequencia[count] = j;    
    }
}

void txt(unsigned long long int sequencia[], int numero) {
    FILE*arquivo;
    arquivo = fopen("fibonacci.txt", "w");

    for (int i = 0; i < numero; i++) {
        fprintf(arquivo, "%llu\n", sequencia[i]);
    }

    fclose(arquivo);
}
