
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int i, letras = 0, digitos = 0, outros = 0;
    
    printf("Digite uma frase: ");
    gets(frase);
    
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] >= 'a' && frase[i] <= 'z' || frase[i] >= 'A' && frase[i] <= 'Z')
        {
            letras++;
        }
        else if(frase[i] >= '0' && frase[i] <= '9')
        {
            digitos++;
        }
        else
        {
            outros++;
        }
    }
    
    printf("A frase digitada tem %d letras, %d digitos e %d outros caracteres", letras, digitos, outros);
    
    return 0;
}