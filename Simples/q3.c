#include <stdio.h>
#include <locale.h>

int main(void) {

    float C, F;
    setlocale(LC_ALL,"portuguese");
   
    printf("Digite uma temperatura, em Celsius:");
    scanf("%f",&C);
   
    F=(C*9/5)+32;
   
    printf("%f C° em F°: %f",C,F);

  return 0;
}