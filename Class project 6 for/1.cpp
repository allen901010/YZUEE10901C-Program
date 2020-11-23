/*
日期:2020/10/26	
學號:1090604
姓名:李岱倫
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	int a=2;
	int b;

	do {
		printf("Enter a postive number:");
		scanf_s("%d", &n);
		if (n <= 0)
			printf("%d is not a postive number!\n", n);


	} while (n <= 0);
	
		for (a = 2; a <= (n-1); a++)
		{
			if (n % a == 0)
			{
				break;
			}
		}

		if (a == n&& n!=1)
			printf("%d is a prime number\n", n);
		else
			printf("%d is not a prime number\n", n);
	
	system("pause");
}


