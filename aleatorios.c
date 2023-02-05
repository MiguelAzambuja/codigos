#include <math.h>
#include <stdio.h>

int raizes(float a, float b,float c, float x1, float x2);

int main(){

    float a,b,c,x1,x2;
    printf("Insira os valores respectivos aos termos a,b e c da forma ax2 bx+c: ");
    scanf("%f %f %f", &a, &b, &c);
    raizes(a,b,c,x1,x2);
    return 0;
}

int raizes(float a, float b,float c, float x1, float x2){
    float delta;
    delta = ((b*b) -4*a*c);

    if(delta < 0){
        printf("n.raizes = 0 ");
    }
    else if(delta == 0){
        printf("n.raizes = 1 ");
        x1 = (((-1) * b) - (sqrt((b*b) - (4 * a * c))))/(2 * a);
        printf("x1 = %g ", x1);
    }
    else{
        printf("n.raizes = 2 ");
        x1 = (((-1) * b) - (sqrt((b*b) - (4 * a * c))))/(2 * a);
        x2 = (((-1) * b) + (sqrt((b*b) - (4 * a * c))))/(2 * a);
        if(x1 > x2){
            float j = 0;
            j = x1;
            x1 = x2;
            x2 = j;
        }
        printf("x1 = %0.4g ", x1);
        printf("x2 = %0.5g ", x2);
    }
}