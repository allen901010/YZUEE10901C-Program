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
	printf("1�[��100�Ҧ���ƪ��ߤ�M:%d\n", sum);

	system("pause");
}