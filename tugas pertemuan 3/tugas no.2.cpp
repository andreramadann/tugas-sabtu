#include <stdio.h>
 
int main(void)
{
 
 
  float celc, fahr, ream ;
 
  printf("Input suhu celsius: ");
  scanf("%f",&celc);
  printf("\n");
 
  fahr = (9.0/5.0 * celc) + 32;
  ream = celc * (4.0/5.0) ;
 
  printf("%.2f derajat Celsius = %.2f derajat Fahrenheit \n",celc,fahr);
  printf("%.2f derajat Celsius = %.2f derajat Reamur \n",celc,ream);
 
 return 0;
}
