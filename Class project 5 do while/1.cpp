/*
���:2020/10/19
�Ǹ�:1090604
�m�W:������
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


void main(void)

{
	int number;           //�ƭ�
	int max = INT_MIN;    //�̤j��
	int sec = INT_MIN;    //�ĤG�j
	float sum = 0;        //�`�M
	float i = 0;          //����

	do 
	{
		printf("Enter next number:\n");
		scanf_s("%d", &number);
		if (number != -1) 
		{

			if (number >= max)
			{
				sec = max;
				max = number;
			}
			else if (number > sec)
				sec = number;
			i++;

			sum = sum + number;
		}
	} while (number != -1 );
	
	printf("Largest is %d\n", max);
	printf("Second largest is %d\n",sec);
	printf("Average is: %.3f\n", sum/i);
	system("pause");

}


