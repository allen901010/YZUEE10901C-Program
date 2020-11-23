/*
日期:2020/10/05
學號:1090604
姓名:李岱倫
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float a;
	float b;
	float c;

	{
		printf("Enter a= ");
		scanf_s("%f", &a);

		printf("Enter b= ");
		scanf_s("%f", &b);

		printf("Enter c= ");
		scanf_s("%f", &c);
		printf("\n");

		if (a > b && a > c)
			printf("Max=%.f\n\n", a);
		else if (b > a && b > c)
			printf("Max=%.f\n\n", b);
		else if (c > a && c > b)
			printf("Max=%.f\n\n", c);
	}

	{
		if (a < b && a < c)
			printf("min=%.f\n\n", a);
		else if (b < a && b < c)
			printf("min=%.f\n\n", b);
		else if (c < a && c < b)
			printf("min=%.f\n\n", c);
	}

	printf("Sum=%.f\n\n", a + b + c);
	printf("Average=%.2f\n\n\n", (a + b + c) / 3);

	printf("計算結束\n\n");
	system("pause");
	return 0;
}

