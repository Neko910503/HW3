#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a = 0, b = 0, c = 0, d = 0;
	while (a != -1)
	{
		printf("Enter loan princpal (-1 to end)¡G"); scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter interest rate¡G"); scanf_s("%f", &b);
		printf("Enter term of the loan in day¡G"); scanf_s("%f", &c);
		d = a * b * c / 365;
		printf("The interest charge is $%f\n\n", d);
		
	}
	system("pause");
	return 0;
}

