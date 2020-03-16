/* 
Ler um vetor U de 10 elementos. A seguir trocar o primeiro elemento com o último, o segundo
com penúltimo etc. até o quinto com o sexto e escrever o vetor U assim modificado.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, U[10], k, cumbuca;

    for(i=0; i < 10; i++){
        scanf("%d", &U[i]);
    }

    for(i=0, k = 9; i < 5; i++, k--){
        cumbuca = U[i];
        U[i] = U[k];
        U[k] = cumbuca;
    }

    printf("\nVetor U:  ");
    for(i=0; i < 10; i++){
        printf("%d\t", U[i]);
    } 

    printf("\n\n");

    return 0;
}