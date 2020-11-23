/*
日期:2020/10/05
學號:1090604
姓名:李岱倫
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float  cash;
	printf("請輸入消費金額\n");
	scanf_s("%f", &cash);
	
	
	if (3000 > cash >= 1000)
	{
		printf("折扣後的金額為%.2f\n", cash*0.95);
	}
	else if (5000 > cash >= 3000)
	{
		printf("折扣後的金額為%.2f\n", cash * 0.92);
	}
	else if (10000 > cash>= 5000)
	{
		printf("折扣後的金額為%.2f\n", cash * 0.9);
	}
	else if (cash >= 10000)
	{
		printf("折扣後的金額為%.2f\n", cash * 0.85);
	}
	else
	{
		printf("花這麼少是要折扣個鬼\n");
	}

	system("pause");
	return 0;
}


