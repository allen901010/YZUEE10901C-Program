/*
日期:2020/11/02
姓名:李岱倫
學號:1090604
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int a, b, c, d, e;
	e = 1;
	printf("你要幾行?\n");
	scanf_s("%d", &a);
	for (a; a >= 1; a--)
	{
		for (b = a; b >= 1; b--)
		{
			printf("*");
		}
		for (c = 1; c <= e; c++)
		{
			printf(" ");
		}
		for (d = 1; d <= e; d++)
		{
			printf("*");
		}
		e++;
		printf("\n");
	}
	

	int i;
	int j;
	int k;

	
	for (i = 1; i <= 9; i += 3)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = i; k < i + 3; k++)
			{
				printf("%2d x %2d = %2d   ", k, j, k * j);
			}
			printf("\n");
		}
		printf("\n");
	}
	system("pause");

}