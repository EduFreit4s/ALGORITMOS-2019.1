#include <stdio.h>
#include <locale.h>

int main(void) {
float C, F;
setlocale(LC_ALL,"portuguese");
printf("Digite uma temperatura, em Fahrenheit:");
scanf("%f",&F);
C=(F-32)*5/9;
printf("%.0f F° em C°: %.0f",F,C);

  return 0;
}