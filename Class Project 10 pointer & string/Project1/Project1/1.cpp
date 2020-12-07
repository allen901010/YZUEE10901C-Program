/*
姓名:李岱倫
學號:1090604
日期:2020/12/07
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrcpy(char a[], char b[]);

int main(void)
{
	char a[100], b[100], c[100];
	printf("Input a string : ");
	gets_s(a);
	mystrcpy(a, b);
	strcpy_s(c, a);
	printf("My strcpy : %s\n", b);
	printf("C strcpy : %s\n", c);

	system("pause");
	return 0;
}

void mystrcpy(char a[], char b[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';
}