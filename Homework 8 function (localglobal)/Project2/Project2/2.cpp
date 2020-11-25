/*
姓名:李岱倫
學號:1090604
日期:2020/11/26
*/

#include <stdio.h>
#include <stdlib.h>

double avg(int, int, int);
void show(int, int, int);
int main(void)
{
	int a, b, c;
	printf("Enter a = ");
	scanf_s("%d", &a);
	printf("Enter b = ");
	scanf_s("%d", &b);
	printf("Enter c = ");
	scanf_s("%d", &c);

	avg(a, b, c);

	system("pause");
	return 0;
}
double avg(int a, int b, int c)
{
	show(a, b, c);
	double avg = (double(a) + double(b) + double(c)) / 3;
	printf("avg = %f\n", avg);
	return 0;
}
void show(int a, int b, int c)
{
	printf("a=%d b=%d c=%d\n", a, b, c);
	return;
}