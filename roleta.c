#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SEMENTE 78


float roleta(float dinhero, int aposta, int tipo){
    int sorteio;

    sorteio = rand()%36 + 1;

    switch (tipo) {
        case 1: // cor
            (sorteio%2==0) ? printf("Vermelho\n") : printf("Preto\n");
            return (aposta%2 == sorteio%2) ? dinhero*2 : 0.0;
        case 2: // numero
            return (aposta == sorteio) ? dinhero*100 : 0.0;
    }


    return -1;
}


int main()
{
    int aposta, opcao;
    float money;

    while(1){
        printf("\nApostar por cor=1, por numero=2: ");
        scanf("%i", &opcao);
        printf("Digite um numero/Par para vermelho e impar para preto: ");
        scanf("%i", &aposta);
        printf("Digite o valor da aposta em R$: ");
        scanf("%f", &money);

        srand(time(NULL));
        if(roleta(money, aposta, opcao) == 0.0){
            printf("Voce perdeu tudo\n\n");
            break;
        }else{
            printf("Seu premio: %.2f", roleta(money, aposta, opcao));
        }

    }

    return 0;
}
