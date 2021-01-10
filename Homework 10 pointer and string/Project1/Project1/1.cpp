/*
日期:2020/12/13
學號:1090604
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void)
{
	int i, b = 0;
	char a[100];
	printf("enter english:");
	gets_s(a);
	for (i = 0; i < 100; i++)
	{
		if (a[i] == 't' && a[i + 1] == 'h' && a[i + 2] == 'e' && a[i + 3] == ' ')
		{
			printf("the從字串第%d個開始出現\n", i);
			b++;
		}
	}
	if (b == 0)
	{
		printf("no the\n");
	}
	system("pause");
}