#include <math.h>
#include <stdio.h>

double funcao(n);

int main(void){
    int n;
    double aproxpi;
    printf("Qual o limite superior desejado da serie: ");
    scanf("%d", &n);
    aproxpi = funcao(n);
    printf("%lf", aproxpi);
    return 0;
}

double funcao(n){
    if (n == 0){
        return 4;
    }else{
        return (funcao(n - 1) + (4 * ((pow(-1, n))/((2 * n) + 1))));
    }
}
