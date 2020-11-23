#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	float x;
	x = 1;
	printf("x\tx*x\tx+x\n");
	while (x >= 1 && x <= 10)
	{
		printf("%.1f\t%.2f\t%.2f\n", x, x*x, x + x);
		x = x + 0.5;
	}
	system("pause");
}