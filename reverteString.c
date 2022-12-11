#include <stdio.h>
#include <string.h>


void upper(char *str)
{
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char frase[100], inverso[100];
    int i;
    
    printf("Digite uma frase: ");
    gets(frase);
    
    for(i = strlen(frase)-1; i >= 0; i--)
    {
      inverso[strlen(frase)-1-i] = frase[i];
    }
    
    upper(inverso);
    printf("A frase digitada ao contrario eh: %s", inverso);
    
    return 0;
}