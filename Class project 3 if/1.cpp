/*
日期:2020/10/05
學號:1090604
姓名:李岱倫
*/

#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	while (1)
	{
		printf("請輸入成績 : \n");
		float grade;
		scanf_s("%f", &grade);



		if (grade < 0 || (grade > 100 && grade < 998 || grade >= 1000))
			printf("請重新輸入或輸入999離開\n\n");

		else if (grade >= 80 && grade <= 100)
			printf("A\n輸入999離開\n");

		else if (grade >= 60 && grade <= 79)
			printf("B\n輸入999離開\n");

		else if (grade >= 0 && grade <= 59)
			printf("C\n輸入999離開\n");

		else if (grade == 999)
			break;


	}


	printf("Bye\n");
	system("pause");
	return 0;
}

