/*
���:2020/10/18
�Ǹ�:1090604
�m�W:������
*/



#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	int number;

	number = 1;
	while (number >= 1 && number <= 100)
	{
		if (number % 18 == 0)

			printf("%d\n", number);
		number++;

	}
	system("pause");

}

