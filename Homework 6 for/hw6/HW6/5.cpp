#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	//¥u¦L¦r¤¸
	int temp = 1;
	for (char i = 33; i <= 126; i++)
	{
		printf("%c ", i);
		temp++;
		if (temp == 10)
		{
			temp = 1;
			printf("\n");
		}
	}

	system("pause");
	return 0;
}