#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x;

	printf("��J�Ʀr:");
	scanf_s("%d", &x);

	while (x != 5)
	{
		printf("���s��J�Ʀr:");
		scanf_s("%d", &x);
	}
	printf("�O5\n");

	system("pause");
}