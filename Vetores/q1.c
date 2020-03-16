/* 
Preencher (ler) um vetor X de 10 elementos com o valor inteiro 30. Escrever o vetor X após seu
total preenchimento.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x[10];

    for(int i=0; i < 10; i++){
        x[i] = 30;
    }

    for(int i=0; i < 10; i++){
        printf("Vetor x[%d] = %d\n", i, x[i]);
    }

    printf("\n\n");
    
    return 0;
}