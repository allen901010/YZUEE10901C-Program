/*
日期:2021/01/02
學號:1090604
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
struct DATE
{
	int day;
	int month;
	int year;
};
void main(void)
{
	DATE d;
	scanf_s("%d", &d.month);
	scanf_s("%d", &d.day);
	scanf_s("%d", &d.year);
	if (d.month < 10)
		printf("0%d/", d.month);
	else
		printf("%d/", d.month);
	if (d.day < 10)
		printf("0%d/", d.day);
	else
		printf("%d/", d.day);
	printf("%d\n", d.year);
	system("pause");
}