/* 
Ler um vetor W de 10 elementos, depois ler um valor V. Contar e escrever quantas vezes o valor V
ocorre no vetor W e escrever também em que posições (índices) do vetor W o valor V aparece.
Caso o valor V não ocorra nenhuma vez no vetor W, escrever uma mensagem informando isto.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float W[10], V[10], P[10]={0};
    int v_con = 0;

    printf("Digite 10 numeros do vetor W: ");
    for(int i=0; i < 10; i++){
        scanf("%f", &W[i]);
    }

    printf("Digite 10 numeros do vetor V: ");
    for(int i=0; i < 10; i++){
        scanf("%f", &V[i]);
    }

    printf("\n");

    for(int i=0; i < 10; i++){
        for(int k=0; k < 10; k++){
            if(V[i] == W[k]){
                v_con++;
                P[k] = i;
            }
        }
    }

    if(v_con == 0){
        printf("V nao ocorra nenhuma vez no vetor W");
    }else{
        printf("Quantidade de vezes que V aparece em W: %d\n", v_con);
        printf("Posicoes que ele ocorre, (indice de W[i]):  ");
        for(int i=0; i < 10 ; i++){
            printf("%d\t", P[i]);
        }
    }

    printf("\n\n");

    return 0;
}