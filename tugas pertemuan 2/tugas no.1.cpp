#include <stdio.h>
int main() {
	
  int a, t;
  float luas;
  
  printf("Masukkan panjang alas: ");
  
  scanf("%d",&a);
  
  printf("Masukkan tinggi segitiga: ");
  
  scanf("%d",&t);
  
  luas = 0.5*a*t;
  
  printf("Luas segitiga adalah %2.f\n", luas);
  
  return 0;
}
