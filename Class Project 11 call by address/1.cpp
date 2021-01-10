/*
姓名:李岱倫
學號:1090604
日期:2020/12/14
*/
#include <stdlib.h>
#include <stdio.h>

void bin_to_dec(int* num)
{
	int dec_value = 0, i = 1;
	while (*num != 0)
	{
		if (*num % 10 == 1)
		{
			dec_value += i;
		}
		*num = *num / 10;
		i = i * 2;
	}
	*num = dec_value;
}
int main(void)
{
	int x;
	printf("enter a binary number : ");
	scanf_s("%d", &x);
	bin_to_dec(&x);
	printf("%d\n", x);
	system("pause");
}