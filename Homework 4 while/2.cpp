/*
日期:2020/10/13
學號:1090604
姓名:李岱倫
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

	printf("1~100所有整數立方值的總合為%d\n", sum);
	system("pause");

}
