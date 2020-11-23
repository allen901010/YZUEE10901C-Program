#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x,sum;

	x = 1;
	sum = 0;

	while (x <= 100)
	{
		sum += x*x*x;
		x++;
	}
	printf("1加到100所有整數的立方和:%d\n", sum);

	system("pause");
}