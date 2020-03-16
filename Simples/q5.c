#include <stdio.h>
#include <locale.h>
#define AZULEJO 1.5

int main(void) {

    float A,L,C,Q;
    setlocale(LC_ALL,"portuguese");
   
    printf("Digite a altura do comodo:");
    scanf("%f",&A);
    printf("Digite a largura do comodo:");
    scanf("%f",&L);
    printf("Digite o comprimento do comodo:");
    scanf("%f",&C);
   
    Q=(A*C*2+A*L*2)/AZULEJO;


    printf("A quantidade de caixas de azulejos necessarias e igual a: %.0f",Q);


  return 0;
  }