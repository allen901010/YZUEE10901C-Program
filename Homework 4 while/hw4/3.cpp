#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x, sum;

	x = 1;
	sum = 0;
	printf("印出1~20中的偶數:\n");
	while (x <= 20)
	{
		if (x % 2 == 0)
		{
			printf("%d\n", x);
			sum = sum + x * x;
		}
		x++;
	}
	printf("1~20中偶數的平方和:%d\n", sum);

	system("pause");
}