/*
日期:2020/11/02
姓名:李岱倫
學號:1090604
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, reverse = 0, rem, k, m, o, j, count = 0;
	
	while (n == 0)
	{
		printf("請輸入整數");
		scanf_s("%d", &n);
		k = n;
		m = n;
		o = n;
		while (n != 0)
		{
			n /= 10;
			count++;
		}

		printf("數字是 %d 位數。\n", count);

		while (m != 0)
		{
			rem = m % 10;
			reverse = reverse * 10 + rem;
			m /= 10;
		}
		rem = 0;
		printf("%d的reverse是%d\n", k, reverse);

		o = reverse;
		printf("%d+%d=%d\n", o, o, o+o);

		j = o + o;
		k = j;
		reverse = 0;
		while (j != 0)
		{
			rem = j % 10;
			reverse = reverse * 10 + rem;
			j /= 10;
		}

		printf("%d的reverse是%d\n", k, reverse);

	}
	system("pause");
}