#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef
    long long int
llint;

void formavetor1(llint * vetor1, int n);
void formavetor2(llint * vetor2, int j);
bool tam(n, j);

int main(void){
    int n, j;
    printf("Quantos elementos tera o primeiro vetor? ");
    scanf("%d", &n);
    printf("Quantos elementos tera o segundo vetor? ");
    scanf("%d", &j);
    llint * vetor1;
    llint * vetor2;
    vetor1 = (llint *) malloc(n*sizeof(llint));
    vetor2 = (llint *) malloc(j*sizeof(llint));
    vetor1[0] = 1;
    vetor2[0] = 0;
    formavetor1(vetor1, n);
    formavetor2(vetor2, j);
    if(tam(n, j)){
        printf("Nao e possivel somar os vetores");
    }else{
        for(int i = 0; i < n; i++){
            printf("%lld ", (vetor1[i] + vetor2[i]));
        }
    }
    free(vetor1);
    free(vetor2);
    return 0;
}

void formavetor1(llint * vetor1, int n){
int k = 1;
    for(int i = 1; i < n; i++){
        vetor1[i] = k + 2;
        k = k + 2;
    }
}

void formavetor2(llint * vetor2, int j){
int z = 0;
    for(int i = 1; i < j; i++){
        vetor2[i] = z + 4;
        z = z + 4;
    }
}

bool tam(n, j){
    if (n != j){
        return true;
    }else{
        return false;
    }
}
