#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a = 0, b = 0;
	while (a != -1)
	{
		printf("Enter sale in dollars (-1 to end)¡G"); scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		b = 200 + (a*0.09);
		printf("Salary is: $%f\n\n", b);
	}
	system("pause");
	return 0;
}