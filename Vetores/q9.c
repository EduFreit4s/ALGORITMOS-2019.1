/* 
Ler um vetor C de 10 nomes de pessoas, após pedir que o usuário digite um nome qualquer de
pessoa. Escrever a mensagem ACHEI, se o nome estiver armazenado no vetor C ou NÃO ACHEI
caso contrário.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomes[10][30], busca[30];
    int i, achou = 0;

    printf("Digite dez nomes: ");
    for(i=0; i < 10; i++){
        gets(nomes[i]);
        fflush(stdin);
    }

    printf("Digite um nome: ");
    scanf("%s", busca);
    for(i=0; i < 10; i++){
        if(strcmp(nomes[i], busca)== 0){
            achou = 1;
        }
    }
    
    if(achou == 1){
         printf("\nAchei!\n");
    }else{
        printf("\nNão achei!\n");
    }

    printf("\n\n");

    return 0;
}