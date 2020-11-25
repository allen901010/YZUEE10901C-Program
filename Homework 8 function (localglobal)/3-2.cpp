/*
姓名:李岱倫
學號:1090604
日期:2020/11/26
*/

#include <stdio.h>
#include <stdlib.h>

__int64 fib(int);

int main(void)
{
	int input, i;

	printf("Enter a number to show the last value of Fibonacci Sequence = ");
	scanf_s("%d", &input);
	printf("\n");

	if (input < 0)
		printf("\nInput cannot less than 0\n\n");

	else {
		for (i = 1; i <= input; i++)
			printf("%I64d\n", fib(i));
	}
	printf("\nThe %dth value of Fibonacci Sequence is : %I64d\n\n", input, fib(input));
	system("pause");
	return 0;
}

__int64 fib(int n)
{
	if (n == 1)
		return 1;

	if (n == 2)
		return 1;

	return (fib(n - 1) + fib(n - 2));
}