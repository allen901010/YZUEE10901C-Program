/*
日期:2020/10/26
學號:1090604
姓名:李岱倫
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int n;
	printf("你要幾行?");
	scanf_s("%d", &n);

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
			printf("*");
			printf("\n");
		
	}

	for (a=n; a>=0 ; a--)
	{
		for (b = a; b >0; b--)
			printf("*");
		printf("\n");

	}
	system("pause");
}

