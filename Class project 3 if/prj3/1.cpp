#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	int a;
	printf("��J���Z:");
	scanf_s("%d", &a);
	if (a < 0 || a>100)
	{
		printf("���Z��J���~\n");
	}
	if (a >= 80 && a <= 100)
	{
		printf("A\n");
	}
	if (a >= 60 && a < 80)
	{
		printf("B\n");
	}
	if (a >= 0 && a < 60)
	{
		printf("C\n");
	}
	system("pause");
}