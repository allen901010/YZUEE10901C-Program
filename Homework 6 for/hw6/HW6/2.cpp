#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int i = 0; 		// 迴圈控制變數

	printf("進入迴圈, i=%d\n", i);
	for (i = 0; i <= 99999999; i++);

	printf("離開迴圈, i=%d\n", i);

	system("pause");
}