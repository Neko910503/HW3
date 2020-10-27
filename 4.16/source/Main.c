#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a, b, c, d;
	printf("(A)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if(b<=a)
			printf("%s", "*");
		}
		printf("\n");
	}
	//=====================================
	printf("(B)\n");
	for (a = 0; a < 10; a++)
	{
		c = 10 - a;
		for (b = 0; b < 10; b++)
		{
			if (b < c)
				printf("%s", "*");
		}
		printf("\n");
	}
	//=====================================
	printf("(C)\n");
	for (a = 0; a < 10; a++)
	{
		c = 10 - a;
		for (d = 0; d < a ; d++)
		{
			printf(" ");
		}
		for (b = 0; b < 10; b++)
		{
			if (b < c)
				printf("%s", "*");
		}
		printf("\n");
	}
	//=====================================
	printf("(D)\n");
	for (a = 0; a < 10; a++)
	{
		c = 10 - a;
		for (d = 10; d > a+1; d--)
		{
			printf(" ");
		}
		for (b = 0; b < 10; b++)
		{
			if (b <= a)
				printf("%s", "*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}