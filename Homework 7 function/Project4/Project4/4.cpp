/*
姓名:李岱倫
學號:1090604
日期:2020/11/20
*/

#include<stdio.h>
#include<stdlib.h>

double power(float, int);

double my_fun(int);

int main(void)
{
	float x;
	int n;
	int a;

	printf("請輸入次數 = ");
	scanf_s("%d", &a);
	printf("%f", my_fun(a));

	system("pause");
	return 0;
}

double power(float x, int n)
{
	if (n == 0)
		return 1;
	else
		return (x * power(x, n - 1));
}

double my_fun(int a)
{
	double sum1 = 0;
	while (a != 0)
	{
		sum1 = sum1 + (1 / power(2, a));
		a--;
	}
	return sum1;
}