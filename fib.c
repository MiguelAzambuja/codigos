#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int fibonacci(numero);

int main(void){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    int resultado = fibonacci(numero);
    printf("%d", resultado);
}

int fibonacci(numero){
    if (numero == 0){
        return 0;
    }else if (numero == 1 || numero == 2){
        return 1;
    }else{
        return ((fibonacci(numero-1))+(fibonacci(numero-2)));
    }
}