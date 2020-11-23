/*
日期:2020/10/18
學號:1090604
姓名:李岱倫
*/



#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	int number;
	printf("請輸入數字\n");
	scanf_s("%d", &number);

	while (number != 5)
	{
		

		printf("猜錯了再來:\n");
		scanf_s("%d", &number);
		

	}
	printf("恭喜答對\n");
	system("pause");

}
