#include <stdio.h>
#include <stdlib.h>

bool is_prime(int num); //if num is a prime number return true
						//else return false

void main(void)
{
	int n;
	int count = 0;
	int target; //keep 24th prime
	int a;

	printf("Enter a number (-1 to stop):");
	scanf_s("%d", &n);

	while (n != -1)
	{
		if (is_prime(n) == true && n >= 2)
			printf("%d is a prime number\n", n);
		else
			printf("%d is not a prime number\n", n);
		printf("Enter a number (-1 to stop):");
		scanf_s("%d", &n);
	}

	printf("\n");

	for (int i = 2; i < 100; i++) {
		a = is_prime(i);
		if (a == true) {
			printf("%2d ", i);
			count++;
			if (count % 5 == 0)
				printf("\n\n");

			if (count == 24)
				target = i;
		}
	}

	printf("The 24th prime number is %d", target);

	system("pause");
}

bool is_prime(int num)
{
	int i;
	int temp;

	for (i = 2; i < num; i++)
	{
		temp = num % i;
		if (temp == 0)
			return false;
	}
	return true;
}