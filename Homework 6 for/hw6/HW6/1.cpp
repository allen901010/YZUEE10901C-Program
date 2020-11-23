#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int position = 1; position <= row; position++)
		{
			printf("%d", row);
		}
		printf("\n");
	}
	system("pause");
}