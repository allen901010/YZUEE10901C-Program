/*
姓名:李岱倫
學號:1090604
日期:2020/11/26
*/

#include <stdio.h>
#include <stdlib.h>

float power(float, int);
int fact(int);
int main(void)
{
	float x;
	int k;
	float sum = 0;
	printf("請輸入底數 = ");
	scanf_s("%f", &x);
	printf("請輸入指數 = ");
	scanf_s("%d", &k);

	while (k >= 0)
	{
		float a = power(x, k);
		int b = fact(k);
		k -= 1;
		sum = sum + (a / b);
	}
	printf("%f", sum);
	system("pause");
	return 0;
}
float power(float x, int k)
{
	if (k == 0)
		return 1;
	else
		return (x * power(x, k - 1));
}

int fact(int k)
{
	if (k > 0)
		return (k * fact(k - 1));
	else
		return 1;
}