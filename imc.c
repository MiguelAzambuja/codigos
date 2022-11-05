// calculadora de imc 

#include <stdio.h>

int main(void){
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    
    if(imc < 16){
        printf("%0.2f (Perigo de vida)", imc);
    }
    if(16 <= imc && imc < 17){
        printf("%0.2f (Muito abaixo do peso)", imc);
    }
    if(17 <= imc && imc < 18.5){
        printf("%0.2f (Abaixo do peso)", imc);
    }
    if(18.5 <= imc && imc < 25){
        printf("%0.2f (Peso normal)", imc);
    }
    if(25 <= imc && imc < 30){
        printf("%0.2f (Acima do peso)", imc);
    }
    if(30 <= imc && imc < 35){
        printf("%0.2f (Obesidade grau I)", imc);
    }
    if(35 <= imc && imc < 40){
        printf("%0.2f (Obesidade grau II)", imc);
    }
    if(imc >= 40){
        printf("%0.2f (Obesidade grau III)", imc);
    }
    return 0;
}
