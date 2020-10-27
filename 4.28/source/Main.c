#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a;
	float b, c, d=0;
	printf("請輸入人員代碼 (經理人員1、時薪工2、抽傭金3、零工4)："); 
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("請輸入周薪：");
		scanf_s("%f", &b);
		printf("此員工的周薪為:%f", b);
		break;
	case 2:
		printf("請輸入每小時工資：");
		scanf_s("%f", &b);
		printf("請輸入工作時數：");
		scanf_s("%f", &c);
		if(c<=40)
		{
			d = b * c;
			printf("此員工的周薪為:%f", d);
		}
		else
		{
			d = b * 40 + 1.5*b*(c-40);
			printf("此員工的周薪為:%f", d);
		}
		break;
	case 3:
		printf("請輸入當周銷售金額：");
		scanf_s("%f", &b);
		c = 250 + b * 0.057;
		printf("此員工的周薪為:%f", c);
		break;
	case 4:
		printf("請輸入每一個產品所獲得的金額：");
		scanf_s("%f", &b);
		printf("請輸入生產多少數量：");
		scanf_s("%f", &c);
		d = b * c;
		printf("此員工的周薪為:%f", d);
		break;
	default: 
		break;
	}
	system("pause");
	return 0;
}


