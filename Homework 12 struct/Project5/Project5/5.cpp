/*
日期:2021/01/02
學號:1090604
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void draw(int n);
void main(void)
{
	draw(4);
	draw(5);
	draw(100);
	system("pause");
}
void draw(int n)
{
	int i, j, k, l = 1, m;
	for (i = 0; i < n; i++)
	{
		for (j = n - i - 1; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("%d", l);
			l++;
		}
		for (m = i; m > 0; m--)
		{
			printf("%d", m);
		}
		l = 1;
		printf("\n");
	}
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < l; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		for (m = i - 1; m > 0; m--)
		{
			printf("%d", m);
		}
		l++;
		printf("\n");
	}
}