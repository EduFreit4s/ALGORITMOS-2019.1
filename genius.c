#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SEMENTE 78

int delay(segs){
    time_t ref = time(NULL);
    while(difftime(time(NULL), ref) < segs);
    return 1;
}

void cores(int quantidades) {
    srand(SEMENTE);
    for(int i=0; i<quantidades; i++){
        switch (rand()%4 + 1) {
            case 1: printf(" Vermelho ");  break;
            case 2: printf(" Amarelo "); break;
            case 3: printf(" Azul "); break;
            case 4: printf(" Verde "); break;
        }
        delay(1);
        system("cls");
    }
}

int acertou(int quantidades){
    int cor, leitura;
    srand(SEMENTE);

    for(int i=0; i<quantidades; i++){
        cor = rand()%4 + 1;
        scanf("%i", &leitura);
        if(leitura != cor){
            printf("Poxa nao foi dessa vez\n");
            delay(1);
            return 0;
        }

        if(i==quantidades-1) printf("Muito bem, proxima rodada");
    }

    return 1;
}


int main() {

    int rodada = 0;

    while(1) {
        rodada+=1;
        printf("Tabela\n");
        delay(1);
        cores(rodada);
        if(!acertou(rodada)) break;
    }

    return 0;
}
