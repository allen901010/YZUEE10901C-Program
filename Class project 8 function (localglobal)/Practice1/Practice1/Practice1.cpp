/*
�m�W:������
�Ǹ�:1090604
���:2020/11/23
*/

#include<stdio.h>
#include<stdlib.h>

void counter(void);
int n;
int main(void)
{
	counter();
	counter();

	system("pause");
	return 0;
}

void counter(void)
{
	n += 1;

	printf("conter()�w�Q�I�s%d���F\n", n);
}