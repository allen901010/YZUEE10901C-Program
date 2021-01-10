/*
學號:1090604
日期:109/12/20
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
void compare(int* a, int* b, int* c);
int main(void)
{
	int a, b, c;
	printf("輸入三個數字比大小");
	scanf_s("%d%d%d", &a, &b, &c);
	compare(&a, &b, &c);
	system("pause");
}
void compare(int* a, int* b, int* c)
{
	int i, max, sec = 0, min = 0, j[3] = { *a,*b,*c };
	if (j[0] == j[1] && j[1] == j[2])
	{
		printf("%d=%d=%d", j[0], j[0], j[0]);
		return;
	}
	if (j[0] == j[1])
	{
		if (j[0] > j[2])
			printf("%d=%d>%d", j[0], j[1], j[2]);
		else
			printf("%d=%d<%d", j[0], j[1], j[2]);
		return;
	}
	if (j[0] == j[2])
	{
		if (j[0] > j[1])
			printf("%d=%d>%d", j[0], j[2], j[1]);
		else
			printf("%d=%d<%d", j[0], j[2], j[1]);
		return;
	}
	if (j[1] == j[2])
	{
		if (j[1] > j[0])
			printf("%d=%d>%d", j[1], j[2], j[0]);
		else
			printf("%d=%d<%d", j[1], j[2], j[0]);
		return;
	}
	for (i = 0; i < 3; i++)
	{
		max = j[i];
		if (j[i + 1] > max)
		{
			min = sec;
			sec = max;
			max = j[i + 1];
		}
		else if (j[i + 1]<max && j[i + 1]>sec)
		{
			min = sec;
			sec = j[i + 1];
		}
	}
	printf("%d>%d>%d", max, sec, min);
}