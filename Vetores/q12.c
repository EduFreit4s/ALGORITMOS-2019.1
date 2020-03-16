/* 
Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15 elementos cujas
5 primeiras posições contenham os elementos de R e as 10 últimas posições, os elementos de S.
Escrever o vetor X.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int R[5], S[10], quinze[15], i, k=0;

    printf("Digite 5 numeros: ");
    for(i=0;i<5;i++){
        scanf("%d", &R[i]);
    }
    printf("\n");

    printf("Digite 10 numeros: ");
    for(i=0;i<10;i++){
        scanf("%d", &S[i]);
    }

    for(i=0;i<15;i++){
        if(i < 5){
            quinze[i] = R[i];
        }else{
            quinze[i] = S[k];
            k++;
        }
    }

    printf("Novo vetor: ");
    for(i=0;i<15;i++){
        printf("%d\t", quinze[i]);
    }

    printf("\n\n");

    return 0;
}       