#include <stdio.h>
#include <stdlib.h>

int luas(int alas,int tinggi);
int keliling(int s1,int s2,int s3);

int main()
{
 int alas,tinggi,s1,s2,s3;
 printf("Menghitung luas dan keliling segiitga\n");
 printf("Alas : ");scanf("%d", &alas);
 printf("Tinggi : ");scanf("%d", &tinggi);
 printf("Sisi 1 : ");scanf("%d", &s1);
 printf("Sisi 2 : ");scanf("%d", &s2);
 printf("Sisi 3 : ");scanf("%d", &s3);
 printf("Luas segitiga %d dan kelilingnya %d\n",luas(alas,tinggi),keliling(s1,s2,s3));
 
 return 0;
 
}


int luas(int alas,int tinggi) 
{
 return (alas*tinggi)/2;
}
int keliling(int s1,int s2,int s3)
{
 return s1+s2+s3;

}

