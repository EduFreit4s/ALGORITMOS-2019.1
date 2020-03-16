/* 
Ler um vetor Q de 10 posições (aceitar somente números positivos). Escrever a seguir o valor do
maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, pares[10], posicao, pares_maior = 0;

    for(i=0; i < 10; i++){
        do{
            scanf("%d", &pares[i]);
            if(pares[i]%2 == 1){
                printf("Digite um numero par!\n");
            }
        }while(pares[i]%2 == 1);
    }

    for(i=0; i < 10; i++){
        if(pares[i] > pares_maior){
            pares_maior = pares[i];
            posicao = i;
        }
    }

    printf("Maior numero: %d\nPosicao no vetor: %d", pares_maior, posicao);
    printf("\n\n");

    return 0;
}