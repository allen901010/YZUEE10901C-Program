#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int input = 0;
	int n1 = 0;
	int n2;
	int reverse = 0;
	int count = 0;

	printf("Enter a number to be reserved:");
	scanf_s("%d", &input);
	n2 = input;
	while (n2 != 0)
	{
		n1 = n2 % 10;
		n2 = n2 / 10;
		reverse = 10 * reverse + n1;
		count++;
	}
	printf("%d reverse number is %d\n", input, reverse);
	printf("%d is %d-digits number\n", input, count);
	printf("%d+%d=%d\n", reverse, reverse, reverse + reverse);
	
	n2 = reverse + reverse;
	input = n2;
	reverse = 0;
	while (n2 != 0)
	{
		n1 = n2 % 10;
		n2 = n2 / 10;
		reverse = 10 * reverse + n1;
		count++;
	}

	printf("%d reverse number is %d\n", input, reverse);
	system("pause");
}