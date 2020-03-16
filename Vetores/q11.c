/* 
Ler um vetor X de 10 elementos. A seguir copiar todos os valores negativos do vetor X para um
vetor R, sem deixar elementos vazios entre os valores copiados. Escrever o vetor X e o vetor R.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int victoria[10], negativos[10]={0}, i, k=0;

    printf("Digite números: ");
    for(i=0; i < 10; i++){
        scanf("%d", &victoria[i]);
    }
    printf("\n");

    for(i=0; i < 10; i++){
        if(victoria[i] < 0){
            negativos[k] = victoria[i];
            k++;
        }
    }

    printf("Vetor X:  ");
    for(i=0; i < 10; i++){
        printf("%d\t", victoria[i]);
    }
    printf("\n");

    printf("Vetor R:  ");
    for(i=0; i < 10; i++){
        if(negativos[i] == 0){
            break;
        }
        printf("%d\t", negativos[i]);
    }

    printf("\n\n");

    return 0;
}