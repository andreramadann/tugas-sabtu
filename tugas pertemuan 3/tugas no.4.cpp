#include <stdio.h>
 
int main(void)
{
  int x;
 
  printf("Input sebuah angka bulat: ");
  scanf("%d",&x);
 
  printf("\n");
 
 
  if (x % 2 == 0) {
    printf("%d adalah bilangan genap \n",x);
  }
  else {
    printf("%d adalah bilangan ganjil \n",x);
  }
 
  return 0;
}
