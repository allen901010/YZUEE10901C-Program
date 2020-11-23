#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x, sum;
	x = 1;
	sum = 0;
	printf("印出40~67的奇數:\n");
	while (x <= 100)
	{
		if (x >= 40 && x <= 67)
		{
			if (x == 40)
			{
				printf("%d\n", x);
			}
			if (x % 2 == 1)
			{
				printf("%d\n", x);
				sum = sum + x;
			}
		}
		x++;
	}
	printf("40到67所有奇數的和:%d", sum + 40);
	system("pause");
}