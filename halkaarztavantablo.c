#include <stdlib.h>
#include <stdio.h>

int main()
{
	float x;
	printf("urunun fiyatini giriniz:");
	scanf("%f", &x);
	int i;
	for(i=0;i<10;i++)
	{
		x = x*1.1;
		printf("%d. gun fiyat =%f\n" ,i+1,x);
	}

	
}

