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
	float height, weight, c, d;
	printf("請輸入身高與體重\n");
	scanf_s("%f %f", &height, &weight);
	c = height / 100;
	d = weight / (c * c);
	printf("%.2f\n", d);
	if (d < 18.5)
	{
		printf("體重過輕\n");
	}
	else if (d >= 18.5 && d < 24)
	{
		printf("體重標準\n");
	}
	else if (d >= 24)
	{
		printf("體重過重\n");
	}
	

	system("pause");
	return 0;
}



