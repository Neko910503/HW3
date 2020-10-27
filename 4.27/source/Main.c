#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a, b;
	float d;
	printf("²¦¤ó¤T¤¸¼Æ:\n");
	for (a = 1; a < 500; a++)
	{
		for (b = a + 1; b < 500; b = b++)
		{
			d = sqrt(pow(a, 2) + pow(b, 2));
			if (d - (int)d == 0 && d <= 500)
			{
				printf("%d %d %d \n", a, b, (int)d);
			}

		}
	}
	system("pause");
	return 0;
}
