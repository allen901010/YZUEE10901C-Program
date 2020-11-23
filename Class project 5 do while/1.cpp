/*
日期:2020/10/19
學號:1090604
姓名:李岱倫
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


void main(void)

{
	int number;           //數值
	int max = INT_MIN;    //最大值
	int sec = INT_MIN;    //第二大
	float sum = 0;        //總和
	float i = 0;          //次數

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


