/*
���:2021/01/02
�Ǹ�:1090604
�m�W:������
*/
#include<stdio.h>
#include<stdlib.h>
struct DATE
{
	int tall;
	int wide;
	int length;
};
void main(void)
{
	int a = 0;
	DATE d;
	printf("length:");
	scanf_s("%d", &d.length);
	printf("wide:");
	scanf_s("%d", &d.wide);
	printf("tall:");
	scanf_s("%d", &d.tall);
	a = d.length * d.tall * d.wide;
	printf("volume:%d\n", a);
	system("pause");
}