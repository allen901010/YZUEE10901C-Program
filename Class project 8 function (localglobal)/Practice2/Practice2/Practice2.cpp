/*
姓名:李岱倫
學號:1090604
日期:2020/11/23
*/

#include<stdio.h>
#include<stdlib.h>

void counter(void);
int main(void)
{
	counter();
	counter();

	system("pause");
	return 0;
}

void counter(void)
{
	static int n = 0;
	n += 1;

	printf("conter()已被呼叫%d次了\n", n);
}