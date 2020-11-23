/*
姓名:李岱倫
學號:1090604
日期:2020/11/20
*/

#include<stdio.h>
#include<stdlib.h>

float f(float);

int main(void)
{
	float x;

	printf("Enter a number  = ");
	scanf_s("%f", &x);

	printf("%f\n", f(x));
	system("pause");
	return 0;
}

float f(float x)
{
	float sum1 = 0;

	sum1 = sum1 + (3 * x * x * x) + (2 * x) - 1;

	return sum1;
}