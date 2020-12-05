/*
姓名:李岱倫
學號:1090604
日期:2020/11/30
*/

#include<stdio.h>
#include<stdlib.h>
void printArray(int A[], int size);
void main(void)
{
	int score[10]{ 0 };
	int i, j, k, l, m;
	printf("Enter no of element:");
	scanf_s("%d", &i);
	for (l = 0; l < i; l++)
	{
		scanf_s("%d", &m);
		score[l] = m;
	}
	printf("Enter the elements to be searched:");
	scanf_s("%d", &j);
	for (k = 0; k <= 10; k++)
	{
		if (score[k] == j)
		{
			printf("Number %d found at the array index:%d\n", j, k);
			break;
		}
	}
	int a, b, c;
	printf("enter the index to insert:");
	scanf_s("%d", &a);
	for (b = 9; b > a - 1; b--)
	{
		score[b + 1] = score[b];
	}
	printf("Enter the value to insert:");
	scanf_s("%d", &c);
	score[a] = c;
	printArray(score, 10);
	system("pause");
}
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", A[i]);
	}
	return;
}