#include <stdio.h>
#include <stdint.h>


int main(int argc, char** argv){
    int n, i, fat;
    scanf("%d", &n);
    fat = 1;
    for (i = 1; i <= n; i++){
        fat = fat * i;
    }
    printf("%d\n", fat);
    return 0;
}