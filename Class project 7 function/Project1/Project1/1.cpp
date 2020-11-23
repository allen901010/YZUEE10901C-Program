#include<stdio.h>
#include<stdlib.h>

void cmp(int x)
{
	int k = -1;
	float sum = 1;
	for (int i = 1; i <= x; i++)
	{
		printf("S=1/1");
		for (float j = 2; j <= i; j++)
		{
			printf(" %+d/%.0f", k, j);
			sum += (1 / j) * k;
			k = k * (-1);
		}
		printf("=%.3f\n", sum);
		k = -1;
		sum = 1;
	}
}
void S(int x)
{
	float sum = 0;
	int k = 1;
	for (float i = 1; i <= x; i++)
	{
		sum += (1 / i) * k;
		k = k * -1;
	}
	printf("S(%d)=%.3f", x, sum);
}
int main(void)
{
	int num1 = 0;
	printf("你要幾行?");
	scanf_s("%d", &num1);
	cmp(num1);
	S(num1);
	system("pause");
}