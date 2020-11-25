/*
姓名:李岱倫
學號:1090604
日期:2020/11/26
*/

# include <stdlib.h>
# include <stdio.h>

int main() {
	int n;
	int i;
	__int64 n1 = 1;
	__int64 n2 = 1;
	__int64 fib = 0;

	printf("Enter a number to show the last value of Fibonacci Sequence :");
	scanf_s("%d", &n);
	printf("\n");

	for (int k = 1; k <= n; k++)
	{
		if (k == 1)
			printf("1\n");

		else if (k == 2)
			printf("1\n");

		else
		{
			for (i = 3; i <= k; i++)
			{
				fib = n2 + n1;
				n2 = n1;
				n1 = fib;
			}

			n2 = 1;
			n1 = 1;
			printf("%I64d\n", fib);
		}
	}
	printf("\nThe %dth value of Fibonacci Sequence is : %I64d\n\n", n, fib);

	system("pause");
	return 0;
}