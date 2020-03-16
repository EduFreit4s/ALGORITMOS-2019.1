/* 
Preencher um vetor A de 10 elementos com os números inteiros de 1 a 10. Escrever o vetor A após
o seu total preenchimento.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[10];

    for(int i=0; i < 10; i++){
        A[i] = i+1;
    }

    for(int i=0; i < 10; i++){
        printf("%d\n", A[i]);
    }

    printf("\n\n");

    return 0;
}