/*
日期:2020/10/05
學號:1090604
姓名:李岱倫
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, max, min;

	printf("請輸入五個數值\n");

	printf("Enter a="); scanf_s("%d", &a);

	printf("Enter b="); scanf_s("%d", &b);

	printf("Enter c="); scanf_s("%d", &c);

	printf("Enter d="); scanf_s("%d", &d);

	printf("Enter e="); scanf_s("%d", &e);

	max = a;
	min = a;

	if (b > max) max = b; else if (b < min) min = b;

	if (c > max) max = c; else if (c < min) min = c;

	if (d > max) max = d; else if (d < min) min = d;

	if (e > max) max = e; else if (e < min) min = e;


	printf("Max=%d\n", max);
	printf("Min=%d\n", min);
	printf("Sum=%d\n\n", a + b + c + d + e);
	printf("Average=%d\n\n\n", (a + b + c + d + e) / 5);
	printf("計算結束\n\n");
	system("pause");
	return 0;
}


