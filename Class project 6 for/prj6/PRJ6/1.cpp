#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num=0;
	int i;

	printf("Enter a positive number:");
	scanf_s("%d", &num);
	while (num <= 0)  //0ぃ琌タ计
	{
		printf("%d is not a positive number!\n", num);
		printf("Enter a positive number:");
		scanf_s("%d", &num);
	}
	if (num == 0 || num == 1)  //耞01
	{
		printf("%d is not a prime number!\n", num);
	}
	if (num == 2) // 耞2
	{
		printf("%d is a prime number!\n", num);
	}
	
	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			printf("%d is not a prime number!\n", num);
			break;
		}
		if (i == num - 1)  //琌借计ぇ计﹚穦浪琩ウ玡计
		{
			printf("%d is a prime number!\n", num);
			break;
		}
	}
	system("pause");
}