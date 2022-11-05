// name aritmInt.c

#include <stdio.h>

int main(){
    int primeiroint, segundoint;
    scanf("%d %d", &primeiroint, &segundoint);
    printf("%d + %d = %d\n",primeiroint,segundoint, primeiroint + segundoint);
    printf("%d - %d = %d\n",primeiroint,segundoint, primeiroint - segundoint);
    printf("%d x %d = %d\n",primeiroint,segundoint, primeiroint * segundoint);
    printf("%d / %d = %d\n",primeiroint,segundoint, primeiroint / segundoint);
    printf("%d %% %d = %d\n", primeiroint,segundoint, primeiroint % segundoint);


    return 0;
}