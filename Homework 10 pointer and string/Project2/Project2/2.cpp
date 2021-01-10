/*
姓名:李岱倫
學號:1090604
日期:2020/12/11
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gen_random_number()
{
	return 1 + rand() % 9;
}
bool compare(int a[4], int b[4])
{
	int i, count = 0, num = 0;
	if (a[0] == b[0] && a[1] == b[1])
	{
		if (a[2] == b[2] && a[3] == b[3])
			return true;
	}

	for (i = 0; i <= 3; i++)
	{
		if (a[i] == b[i])
			count++;
	}
	if (a[0] != b[0])
	{
		if (a[0] == b[1] || b[2] || b[3])
			num++;
	}
	if (a[1] != b[1])
	{
		if (a[1] == b[0] || b[2] || b[3])
			num++;
	}
	if (a[2] != b[2])
	{
		if (a[2] == b[1] || b[0] || b[3])
			num++;
	}
	if (a[3] != b[3])
	{
		if (a[3] == b[1] || b[2] || b[0])
			num++;
	}
	printf("%dA,%dB\n", count, num);
	return false;
}

void main(void)
{
	int a[4], b[4];
	int i;
	srand(time(NULL));
	for (i = 0; i <= 3; i++)
	{
		a[i] = gen_random_number();
	}
	printf("%d,%d,%d,%d\n", a[0], a[1], a[2], a[3]);
	for (i = 0; i <= 3; i++)
	{
		printf("enter a number");
		scanf_s("%d", &b[i]);
	}
	while (compare(a, b) == false)
	{
		for (i = 0; i <= 3; i++)
		{
			printf("enter a number");
			scanf_s("%d", &b[i]);
		}
	}
	printf("correct answer");

	system("pause");
}