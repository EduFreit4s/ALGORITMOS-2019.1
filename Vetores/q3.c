/* 
Preencher um vetor B de 10 elementos com 1 se o índice do elemento for ímpar e com 0 se for
par. Escrever o vetor B após o seu total preenchimento.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int B[10], i;

    for(i=0; i < 11; i++){
        if(i%2 == 0){
            B[i] = 0;
        }else{
            B[i] = 1;
        }
    }

    for(i=0; i < 10; i++){
        printf("%d\n", B[i]);
    }

    printf("\n\n");

    return 0;
}