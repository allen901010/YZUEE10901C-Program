#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x;

	printf("輸入數字:");
	scanf_s("%d", &x);

	while (x != 5)
	{
		printf("重新輸入數字:");
		scanf_s("%d", &x);
	}
	printf("是5\n");

	system("pause");
}