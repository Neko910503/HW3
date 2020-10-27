#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	printf("Enter length¡G"); scanf_s("%d", &c);
	printf("Enter breadth¡G"); scanf_s("%d", &d);
	for (a = 0; a < c; a++)
	{
		for (b = 0; b < d; b++)
		{
			if ((a == 0) || (a == c-1) || (b == 0) || b == d-1)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
