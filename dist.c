#include <stdio.h>
#include <math.h>

int main(){
    float xA,xB,yA,yB;
    float resultado;
    scanf("%f %f", &xA,&yA);
    scanf("%f %f", &xB, &yB);

    resultado = sqrt(pow(xA-xB,2)+pow(yA-yB,2));

    printf("%g",resultado);

    return 0;
}
