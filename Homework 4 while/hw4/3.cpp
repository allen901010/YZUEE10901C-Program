#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x, sum;

	x = 1;
	sum = 0;
	printf("�L�X1~20��������:\n");
	while (x <= 20)
	{
		if (x % 2 == 0)
		{
			printf("%d\n", x);
			sum = sum + x * x;
		}
		x++;
	}
	printf("1~20�����ƪ�����M:%d\n", sum);

	system("pause");
}