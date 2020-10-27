#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	float b = 0, c = 0, d = 0, e = 0, f = 0;
	while (a >= 0)
	{
		printf("\nEnter account number(-1 to end)¡G"); scanf_s("%d", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter beginning balance¡G"); scanf_s("%f", &b);
		printf("Enter total charges¡G"); scanf_s("%f", &c);
		printf("Enter total credits¡G"); scanf_s("%f", &d);
		printf("Enter credit limit¡G"); scanf_s("%f", &e);
		f = b + c - d;
		if (f > e)
		{
			printf("Account¡G     %d\n", a);
			printf("Credit Limit¡G%f\n", e);
			printf("Balance¡G     %f\n", f);
			printf("Credit Limit Exceeded.\n");
		}
	} 
	system("pause");
	return 0;
}