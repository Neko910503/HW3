#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a = 0, b = 0, c = 0;
	while (a != -1)
	{
		printf("Enter # of hours worked (-1 to end)¡G"); scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter hourly rated of the worker ($00.00)¡G"); scanf_s("%f", &b);
		if(a>40)
		{
			a = a + 0.5;
		}
		c = a * b;
		printf("Salary is $%f\n\n", c);
	}
	system("pause");
	return 0;
}

