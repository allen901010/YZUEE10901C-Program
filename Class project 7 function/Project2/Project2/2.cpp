/*
姓名:李岱倫
學號:1090604
日期:2020/11/16
*/
#include <stdio.h>
#include <stdlib.h>

bool is_prime(int num);

int main(void)
{
	int b = 0;
	int num = 0;
	int g = 0;
	while (num != -1)
	{
		printf("Enter any number(-1 to stop): ");
		scanf_s("%d", &num);

		if (num == -1)
			break;

		if (is_prime(num) == true)
			printf(" %d is a prime number\n", num);
		else
			printf(" %d is not a prime number\n", num);
	}

	printf("\n\n");
	printf("Prime numbers:\n");

	for (num = 2; num <= 100; num++)
	{
		is_prime(num);
		if (is_prime(num) == true)
		{
			printf("%2d  ", num);
			b += 1;
			if (b % 5 == 0)
				printf("\n\n");
			if (b == 24)
				g = num;
		}
	}

	printf("\n\n");
	printf("The 24th prime number is %d\n\n", g);

	system("pause");
	return 0;
}

bool is_prime(int n)
{
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}