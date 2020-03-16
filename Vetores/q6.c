/* 
Ler um vetor D de 10 elementos. Criar um vetor E, com todos os elementos de D na ordem
inversa, ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim
por diante. Escrever todo o vetor D e todo o vetor E.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int D[10], i, k, E[10];

    printf("Digite 10 numeros: ");
    for(i=0; i < 10; i++){
        scanf("%d", &D[i]);
    }

    printf("\n");

    for(i=0, k = 9; i < 10; i++, k--){
        E[i] = D[k];
    }

    printf("Vetor D:  ");
    for(i=0; i < 10; i++){
        printf("%d\t", D[i]);
    }
    printf("\n");

    printf("Vetor E:  ");
    for(i=0; i < 10; i++){
        printf("%d\t", E[i]);
    }

    printf("\n\n");

    return 0;
}