/* 
Ler um vetor A de 6 elementos contendo o gabarito da Mega Sena. A seguir, ler um vetor B de 10
elementos contendo uma aposta. Escrever quantos pontos fez o apostador.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int mega[6], aposta[10], i, k, sorte=0;

    printf("Digite os numeros sorteados: ");
    for(i=0; i < 6; i++){
        scanf("%d", &mega[i]);
    }

    printf("Digite os numeros da sua aposta: ");
    for(i=0; i < 10; i++){
        scanf("%d", &aposta[i]);
    }

    for(i=0; i < 6; i++){
        for(k=0; k < 10; k++){
            if(aposta[k] == mega[i]){
                sorte++;
            }
        }
    }

    printf("\nVoce fez %d ponto(s)", sorte);
    printf("\n\n");

    return 0;
}