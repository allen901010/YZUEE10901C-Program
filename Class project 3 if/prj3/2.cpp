#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	float a, b, c, max = 0, min = 0, average, sum;
	printf("Enter a=");
	scanf_s("%f", &a);
	printf("Enter b=");
	scanf_s("%f", &b);
	printf("Enter c=");
	scanf_s("%f", &c);
	sum = a + b + c;
	average = (a + b + c) / 3;
	if (a > b&&a > c)
	{
		max = a;
		printf("max=%.0f\n", a);
	}
	if (b > a&&b > c)
	{
		max=b;
		printf("max=%.0f\n", b);
	}
	if (c > b&&c > a)
	{
		max = c;
		printf("max=%.0f\n", c);
	}
	if (a < b&&a < c)
	{
		min = a;
		printf("min=%.0f\n", a);
	}
	if (b < a&&b < c)
	{
		min = b;
		printf("min=%.0f\n", b);
	}
	if (c < b&&c < a)
	{
		min = c;
		printf("min=%.0f\n", c);
	}
	printf("sum=%.0f\n", sum);
	printf("average=%.2f\n", average);
	system("pause");
}