#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	int a;
	printf("輸入成績:");
	scanf_s("%d", &a);
	if (a < 0 || a>100)
	{
		printf("成績輸入錯誤\n");
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