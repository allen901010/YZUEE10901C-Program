/*
���:2020/10/13
�Ǹ�:1090604
�m�W:������
*/



#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	int number = 1; 
	int sum = 0;

	while (number >= 1 && number <= 100)
	{
		sum = sum + (number * number*number);

		number++;
		
	}

	printf("1~100�Ҧ���ƥߤ�Ȫ��`�X��%d\n", sum);
	system("pause");

}
