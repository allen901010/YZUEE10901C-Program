#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int i=1;
	while (i >= 1 && i <= 500)
	{
		if (i % 7 == 0 && i % 3 == 0&&i%2!=0)
				printf("%d\n", i);
		i++;
	}
	system("pause");
}