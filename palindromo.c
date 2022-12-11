#include <stdio.h>
#include <string.h>


int main(){
    char frase[100], inverso[100];
    int i, tam;
    
    printf("Digite uma frase: ");
    gets(frase);

    for(i = strlen(frase)-1; i >= 0; i--);
    {
      inverso[strlen(frase)-1-i] = frase[i];
    }

    tam = strlen(frase);
    while(tam >= 0){
        if(frase[i] != frase[tam]){
            printf("palindromo: falso");
            break;
        }
        i++;
        tam--;
    }
    
    if(tam < 0){
        printf("palindromo: verdadeiro");
    }

    return 0;
}