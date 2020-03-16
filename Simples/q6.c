#include <stdio.h>
#include <locale.h>
#define COMBUSTIVEL 1.9

int main(void) {

    float Kf,Ki,L,V,M,T;
    setlocale(LC_ALL,"portuguese");
   
    printf("Digite o odometro inicial:");
    scanf("%f",&Ki);
    printf("Digite o odometro final:");
    scanf("%f",&Kf);
    printf("Digite a quantidade de combustivel gasta:");
    scanf("%f",&L);
    printf("Digite o valor total recebido dos passageiros:");
    scanf("%f",&V);
    printf("Media de consumo: %.1f Km/L\n", (Kf-Ki)/L);
    printf("Lucro liquido: %1.f reais", V-L*COMBUSTIVEL);



  


  return 0;
  }