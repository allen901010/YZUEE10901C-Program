/*
���:2020/10/26
�Ǹ�:1090604
�m�W:������
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b;
	int n;
	printf("�A�n�X��?");
	scanf_s("%d", &n);

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
			printf("*");
			printf("\n");
		
	}

	for (a=n; a>=0 ; a--)
	{
		for (b = a; b >0; b--)
			printf("*");
		printf("\n");

	}
	system("pause");
}

