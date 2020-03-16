/* 
Ler um vetor X de 10 elementos inteiros e positivos. Criar um vetor Y da seguinte forma: os
elementos de Y com índice par receberão os respectivos elementos de X divididos por 2; os
elementos com índice ímpar receberão os respectivos elementos de X multiplicados por 3.
Escrever o vetor X e o vetor Y.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float X[10], Y[10];
    int i, k;

    printf("Digite 10 numeros: ");
    for(i=0; i < 10; i++){
        scanf("%f", &X[i]);
    }

    printf("\n");

    for(i=0, k = 0; i < 10; i++, k++){
        if(k%2 == 0){
            Y[k] = (X[i]/2);
        }else{
            Y[k] = (X[i]*3);
        }
    }

    printf("Vetor X:  ");
    for(i=0; i < 10; i++){
        printf("%g\t", X[i]);
    }
    printf("\n");

    printf("Vetor Y:  ");
    for(i=0; i < 10; i++){
        printf("%g\t", Y[i]);
    }

    printf("\n\n");

    return 0;
}