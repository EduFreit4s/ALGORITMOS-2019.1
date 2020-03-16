/* 
Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0.
Escrever o vetor C modificado.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int C[10], i;

    printf("Digite 10 numeros pares e impares: ");
    for(i=0; i < 10; i++){
        scanf("%d", &C[i]);
    }
    
    printf("\n");

    for(i=0; i < 10; i++){
        if(C[i] < 0){
            C[i] = 0;
        }
    }

    for(i=0; i < 10; i++){
        printf("%d\n", C[i]);
    }

    printf("\n\n");

    return 0;
}