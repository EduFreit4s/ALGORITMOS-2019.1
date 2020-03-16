#include <stdio.h>
#include <locale.h>

int main(void) {

    float V,C,N,Cc;
    setlocale(LC_ALL,"portuguese");
   
    printf("Digite o numero de voltas:");
    scanf("%f",&V);
    printf("Digite o comprimentoda pista:");
    scanf("%f",&C);
    printf("Digite numero de abastecimentos desejados:");
    scanf("%f",&N);
    printf("Digite o consumo do carro, em km/L:");
    scanf("%f",&Cc);
    printf("O numero minimo de litros necessarios e: %.1f L\n", (V*(C/N+1))/Cc);
   



  


  return 0;
  }