/*
日期:2020/10/12
學號:1090604
姓名:李岱倫
*/

#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	int number;
	printf("Enter a postive number: ");
	scanf_s("%d", &number);

	while (number<=0)
	{
		
		printf("%d is not a postive number!\n", number);
		printf("請重新輸入");
		scanf_s("%d", &number);
		
		

	}

	printf("%d is a postive number!\n", number);
	system("pause");

}



