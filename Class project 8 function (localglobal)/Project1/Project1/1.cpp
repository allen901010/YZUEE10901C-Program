/*
姓名:李岱倫
學號:1090604
日期:2020/11/23
*/

#include <stdio.h>
#include <stdlib.h>

int print_ascii(int start, int end, int count);
int main(void)
{
	int start = 0, end = 0, count = 0;
	printf("Enter start number : ");
	scanf_s("%d", &start);
	printf("Enter end number : ");
	scanf_s("%d", &end);
	printf("Enter count number : ");
	scanf_s("%d", &count);
	print_ascii(start, end, count);
	printf("\n");
	system("pause");
	return 0;
}

int print_ascii(int start, int end, int count)
{
	int k = 0;
	for (start > 0; start <= end; start++)
	{
		printf("%c", start);
		k++;
		if (k % count == 0)
			printf("\n");
	}
	return 0;
}