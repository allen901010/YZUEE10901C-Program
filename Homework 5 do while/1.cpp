/*
學號；1090604
日期:109/10/24
姓名:李岱倫
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)

{
	printf("印出1到500可被7跟3整除但不可被2整除的數字\n");
	int a = 1;
	do {
		if (a % 21 == 0 && a % 2 != 0)
		
				printf("%d\n", a);
			
		a++;
	} while (a <= 500);
	system("pause");

}

