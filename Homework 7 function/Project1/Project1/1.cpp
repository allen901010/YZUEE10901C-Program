/*
姓名:李岱倫
學號:1090604
日期:2020/11/20
*/

#include<stdio.h>
#include<stdlib.h>

float power(float, int);
float fact(int);
float f1(int);
float f2(int);
int main(void)
{
	float x;
	int n;
	int a;
	int b;

	printf("請輸入底數 = ");
	scanf_s("%f", &x);
	printf("請輸入指數 = ");
	scanf_s("%d", &n);

	printf("%f ^ %d = ", x, n);
	printf("%f\n", power(x, n));

	printf("請輸入次數 = ");
	scanf_s("%d", &a);
	printf("%f", f1(a));

	printf("請輸入次數 = ");
	scanf_s("%d", &b);
	printf("%f", f2(b));

	system("pause");
	return 0;
}

float power(float x, int n)
{
	if (n == 0)
		return 1;
	else
		return (x * power(x, n - 1));
}

float fact(int m)
{
	if (m > 0)
		return (m * fact(m - 1));
	else
		return 1;
}
float f1(int a)
{
	float sum1 = 0;
	while (a != 0)
	{
		sum1 = sum1 + (1 / power(2, a));
		a--;
	}
	return sum1;
}

float f2(int b)
{
	float sum2 = 0;
	while (b != 0)
	{
		sum2 = sum2 + (1 / fact(b));
		b--;
	}
	return sum2;
}