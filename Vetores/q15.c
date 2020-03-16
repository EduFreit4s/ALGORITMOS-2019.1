/* 
Ler dois vetores: R de 5 elementos e T de 10 elementos. Gerar um vetor X que possua os
elementos comuns a R e T. Considere que no mesmo vetor não haverão números repetidos.
Escrever o vetor X.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int R_1[5], T_1[10]={0}, X_X[15], i, k=0;

    printf("Digite 5 numeros: ");
    for(i=0;i<5;i++){
        scanf("%d", &R_1[i]);
    }
    printf("\n");

    printf("Digite 10 numeros: ");
    for(i=0;i<10;i++){
        scanf("%d", &T_1[i]);
    }

    for(i=0;i<10;i++){
        for(k=0; k <5; k++){
            if(R_1[k] == T_1[i]){
                X_X[i] = T_1[i];
            }
        }
    }

    printf("Novo vetor: ");
    for(i=0;i<10;i++){
        if(X_X[i] == 0){
            break;
        }
        printf("%d\t", X_X[i]);
    }

    printf("\n\n");

    return 0;
}