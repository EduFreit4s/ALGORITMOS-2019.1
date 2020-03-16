/* 
Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e
contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma e o
resultado da contagem.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[10]={0}, media = 0;
    int i, conta=0;

    for(i=0;i<10;i++){
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    for(i=0;i<10;i++){
        if(notas[i] > (media/10)){
            conta++;
        }
    }

    printf("Media igual: %g\n", media/10);
    printf("Alunos acima da media: %d", conta);

    printf("\n\n");

    return 0;
}