#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x, sum;

	x = 1;
	sum = 0;
	printf("1~20い案计:\n");
	while (x <= 20)
	{
		if (x % 2 == 0)
		{
			printf("%d\n", x);
			sum = sum + x * x;
		}
		x++;
	}
	printf("1~20い案计キよ㎝:%d\n", sum);

	system("pause");
}