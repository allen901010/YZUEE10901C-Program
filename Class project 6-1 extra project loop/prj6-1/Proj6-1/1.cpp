#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	/*初始化變數*/
	int n = 0;
	int row = 0;
	int multiplicand = 0;
	int input = 0;
	/*輸入數字*/
	printf("n=");
	scanf_s("%d", &n);

	for (row = 1; row <= n; row++)
	{
		/*列印左半圖形*/

		for (int leftStarCount = n - row + 1; leftStarCount > 0; leftStarCount--)
		{
			printf("*");
		}
		//列印空白部分
		for (int spaceCount = 1; spaceCount <= row; spaceCount++)
		{
			printf(" ");
		}
		/*列印右半圖形*/
		for (int rightStarCount = 1; rightStarCount <= row; rightStarCount++)
		{
			printf("*");
		}
		printf("\n");

	}


	//乘法表 解法1
	for (int i = 1; i <= 9; i += 3)
	{
		for (j = 1; j <= 9; j++)
			printf("%2d * %2d = %2d\t%2d * %2d = %2d\t%2d * %2d = %2d\n", i, j, i * j, i + 1, j, (i + 1) * j, i + 2, j, (i + 2) * j);
		printf("\n");
	}

	//乘法表 解法2
	for (int rowBlock = 1; rowBlock <= 3; rowBlock++)
	{
		for (int multiplier = 1; multiplier <= 9; multiplier++)
		{
			for (int columnBlock = 1; columnBlock <= 3; columnBlock++)
			{
				multiplicand = 3 * (rowBlock - 1) + columnBlock;
				printf("%2d * %2d = %2d\t", multiplicand, multiplier, multiplicand * multiplier);
			}
			printf("\n");
		}
		printf("\n");
	}
}

