#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a;
	float b, c, d=0;
	printf("�п�J�H���N�X (�g�z�H��1�B���~�u2�B��Ī�3�B�s�u4)�G"); 
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("�п�J�P�~�G");
		scanf_s("%f", &b);
		printf("�����u���P�~��:%f", b);
		break;
	case 2:
		printf("�п�J�C�p�ɤu��G");
		scanf_s("%f", &b);
		printf("�п�J�u�@�ɼơG");
		scanf_s("%f", &c);
		if(c<=40)
		{
			d = b * c;
			printf("�����u���P�~��:%f", d);
		}
		else
		{
			d = b * 40 + 1.5*b*(c-40);
			printf("�����u���P�~��:%f", d);
		}
		break;
	case 3:
		printf("�п�J��P�P����B�G");
		scanf_s("%f", &b);
		c = 250 + b * 0.057;
		printf("�����u���P�~��:%f", c);
		break;
	case 4:
		printf("�п�J�C�@�Ӳ��~����o�����B�G");
		scanf_s("%f", &b);
		printf("�п�J�Ͳ��h�ּƶq�G");
		scanf_s("%f", &c);
		d = b * c;
		printf("�����u���P�~��:%f", d);
		break;
	default: 
		break;
	}
	system("pause");
	return 0;
}


