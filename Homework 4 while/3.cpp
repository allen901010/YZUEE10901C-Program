/*
���:2020/10/18
�Ǹ�:1090604
�m�W:������
*/



#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	int number = 1;
	int x;
	int sum = 0;


	while (number >= 1 && number <= 20)
	{
		if (number % 2 == 0)
		{
			x = number * number;
			printf("%d\n", number);
			sum = sum + x;
		}
		number++;
	}

	printf("%d\n", sum);
	system("pause");

}

