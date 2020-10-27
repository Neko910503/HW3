#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int b=0;
	float a, c=0, d[4] ,e ;
	printf("Enter investment of #$¡G"); scanf_s("%f", &a);
	for (b = 0; b < 5; b++) 
	{
		d[b] = a;
	}
	for (b = 0; b < 5; b++) 
	{
		e = 1.1 + (b*0.005);
		d[b] = d[b] * pow(e, 15);
	}
	printf("Interest rates of 10.0 is $%f\n", d[0]);
	printf("Interest rates of 10.5 is $%f\n", d[1]);
	printf("Interest rates of 11.0 is $%f\n", d[2]);
	printf("Interest rates of 11.5 is $%f\n", d[3]);
	printf("Interest rates of 12.0 is $%f\n", d[4]);

	system("pause");
	return 0;
}


