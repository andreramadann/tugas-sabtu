#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float alas,tinggi,miring;
	printf("nsisi alas : "); scanf("%f", &alas);
	printf("sisi tinggi : "); scanf("%f", &tinggi);
	
	miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
	printf("nsisi miring segitiga adalah %.2fnn", miring);
	
	return EXIT_SUCCESS;
}
