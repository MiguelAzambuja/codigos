#include <stdio.h>

int main (){
    int Xa, Xb, Ya, Yb, Xc, Yc, area;

    printf("Digite a cordenada de A\n");
    scanf("%d %d", &Xa,&Ya);
    printf("Digite a cordenada de B\n");
    scanf("%d %d", &Xb,&Yb);
    Xc = Xb;
    Yc = Ya;
    printf("Ponto C (%d,%d)",Xc,Yc);

    area = ((Xc-Xa)*(Yb-Yc))/2;

    prinf("Area = %d",area);

    return 0;
}