/*
���:2020/12/13
�Ǹ�:1090604
�m�W:������
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
			printf("the�q�r���%d�Ӷ}�l�X�{\n", i);
			b++;
		}
	}
	if (b == 0)
	{
		printf("no the\n");
	}
	system("pause");
}