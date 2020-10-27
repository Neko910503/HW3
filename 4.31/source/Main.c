#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	for (a = 0; a < 10; a=a+2)
	{
		c = 10 - a;
		for (d = 10; d > a + 1; d=d-2)
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
	for (a = 2; a < 10; a=a+2)
	{
		printf(" ");
		c = 9 - a;
		for (d = 0; d < a; d=d+2)
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


	system("pause");
	return 0;
}