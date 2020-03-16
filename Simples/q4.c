#include <stdio.h>
#include <locale.h>
#define POTENCIA 18

int main(void) {

    float P,L,C,Q;
    setlocale(LC_ALL,"portuguese");
   
    printf("Digite a potencia da lampada, em watts:");
    scanf("%f",&P);
    printf("Digite a largura e comprimento do comodo: ");
    scanf("%f %f",&L,&C);
   
    Q=(L*C*POTENCIA)/P;

    printf("A quantidade de lampadas necessarias e igual a: %.0f",Q);


  return 0;
  }