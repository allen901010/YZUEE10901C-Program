#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int i = 0; 		// �j�鱱���ܼ�

	printf("�i�J�j��, i=%d\n", i);
	for (i = 0; i <= 99999999; i++);

	printf("���}�j��, i=%d\n", i);

	system("pause");
}