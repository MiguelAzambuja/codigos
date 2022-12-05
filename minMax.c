#include <stdio.h>

int main(){
    int n, max, min = 0;
    printf("digite a quantidade de numeros: ");
    scanf("%d", &n);
    int teste[n];

    for(int i=0; i < n; i++) {
        printf("digite um numero: ", i+1);
        scanf("%d", teste+i);   
    }

    max = teste[0];
    min = teste[0];

    for(int i=0; i < n; i++) {
    if(teste[i] > max)
        max = teste[i];
    
    if (teste[i]< min)
        min = teste[i]; 
    }
    
     for(int i=0; i < n; i++) {
        if(teste[i] == max)
            printf("%d> ", max);
        if(teste[i] == min)
            printf("%d< ", min);
        if(teste[i] != max && teste[i] != min)
            printf("%d ", teste[i]);
    }

return 0;
}