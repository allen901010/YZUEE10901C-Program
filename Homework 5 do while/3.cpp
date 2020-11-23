/*
學號；1090604
日期:109/10/24
姓名:李岱倫
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)

{
	int a, b, c;
	b = 1;
	c = 1;
	do {
		printf("Enter an odd number=");
		scanf_s("%d", &a);
		if (a < 0 || a % 2 == 0)
			printf("Error!\n");
	} while (a < 0 || a % 2 == 0);
	printf("sum:1");
	do {
		b = b + 2;
		printf("+%d", b);
		c = c + b;
	} while (b != a);
	printf("=%d\n", c);
	system("pause");
}
