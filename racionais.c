#include <stdio.h>

typedef
    struct Racionais{
        int numerador, denominador;

    }
Racionais;

int mdc(n, m);

int main(void){
    Racionais Q1;
    Racionais Q2;
    int n, m, n1, m1, mdc1, mdc2, resultado;
    n = 0;
    m = 0;
    n1 = 0;
    m1 = 0;
    mdc1 = 0;
    mdc2 = 0;
    printf("Digite um numero racional: ");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("Digite outro racional: ");
    scanf("%d", &n1);
    scanf("%d", &m1);
    mdc1 = mdc(n, m);
    mdc2 = mdc(n1, m1);
    Q1.numerador = (n / mdc1);
    Q1.denominador = (m / mdc1);
    if (Q1.denominador < 0){
        Q1.denominador *= (-1);
        Q1.numerador *= (-1);
    }
    Q2.numerador = (n1 / mdc2);
    Q2.denominador = (m1 / mdc2);
    if (Q2.denominador < 0){
        Q2.denominador *= (-1);
        Q2.numerador *= (-1);
    }
    printf("%d/%d", Q1.numerador, Q1.denominador); //1° simplificado
    printf(" ");
    printf("%d/%d", Q2.numerador, Q2.denominador); //2° simplificado
    printf(" ");
    n = numerador1, m = numerador2, n1 = n + m, m1 = denominador;
    n = (Q1.numerador * Q2.denominador);
    m = (Q2.numerador * Q1.denominador);
    n1 = n + m;
    m1 = (Q1.denominador * Q2.denominador);
    if (n1 == 0){
        m1 = 1;
    }
    mdc1 = mdc(n1, m1);
    n1 = (n1/mdc1);
    m1 = (m1/mdc1);
    if (m1 < 0){
        n1 *= (-1);
        m1 *= (-1);
    }
    printf("%d/%d", n1, m1);
    printf(" ");
    
    n = (Q1.numerador * Q2.denominador);
    m = (Q2.numerador * Q1.denominador);
    n1 = n - m;
    m1 = (Q1.denominador * Q2.denominador);
    if (n1 == 0){
        m1 = 1;
    }
    mdc1 = mdc(n1, m1);
    n1 = (n1/mdc1);
    m1 = (m1/mdc1);
    if (m1 < 0){
        n1 *= (-1);
        m1 *= (-1);
    }
    printf("%d/%d", n1, m1);
    printf(" ");
    
    n = (Q1.numerador * Q2.numerador);
    m = (Q1.denominador * Q2.denominador);
    if (n == 0){
        m = 1;
    }
    mdc1 = mdc(n, m);
    n = (n/mdc1);
    m = (m/mdc1);
    if (m < 0){
        n *= (-1);
        m *= (-1);
    }
    printf("%d/%d", n, m);
    printf(" ");
    
    n = (Q1.numerador * Q2.denominador);
    m = (Q1.denominador * Q2.numerador);
    if (n == 0){
        m = 1;
    }
    mdc1 = mdc(n, m);
    n = (n/mdc1);
    m = (m/mdc1);
    if (m < 0){
        n *= (-1);
        m *= (-1);
    }
    printf("%d/%d", n, m);
    printf(" ");
}

int mdc(n, m){
    if (m == 0){
        return n;
    }else{
        return (mdc(m, n % m));
    }
}