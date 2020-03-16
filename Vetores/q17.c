/* 
Ler as notas finais de uma turma de 10 alunos armazenando-as em um vetor N. A seguir calcule a
média aritmética das notas dos alunos aprovados (nota maior ou igual a 6,0). Armazene em um
vetor P a posição (índice) que cada aluno ocupa no vetor N, dos alunos que obtiveram nota maior
que a média calculada. Imprimir a média calculada e logo após o vetor P. Obs.: Não deixar valores
em branco entre os elementos de P.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float  N[10], apro[10]={0}, media_N=0;
    int i, ko = 0;

    printf("Digite as notas finais da turma: \n");
    for(i=0; i < 10; i++){
        scanf("%f", &N[i]);
    }

    for(i=0; i < 10; i++){
        if(N[i] >= 6){
            media_N += N[i];
            ko++;
        }
    }

    for(i=0; i<10; i++){
        if(N[i] > (media_N/ko)){
            apro[i] = N[i];
        }
    }

    printf("Media dos %d alunos com nota >= 6: %g\n", ko, media_N/ko);

    printf("Alunos com nota maior que a media: ");
    for(i=0;i<10;i++){
            if(apro[i] > (media_N/ko)){
                printf("Aluno[%d] NOTA: %g\n", i+1,  apro[i]);
            }
    }

    printf("\n\n");

    return 0;
}