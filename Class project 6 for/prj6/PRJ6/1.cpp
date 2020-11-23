#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num=0;
	int i;

	printf("Enter a positive number:");
	scanf_s("%d", &num);
	while (num <= 0)  //0不是正數
	{
		printf("%d is not a positive number!\n", num);
		printf("Enter a positive number:");
		scanf_s("%d", &num);
	}
	if (num == 0 || num == 1)  //另外判斷0、1
	{
		printf("%d is not a prime number!\n", num);
	}
	if (num == 2) // 另外判斷2
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
		if (i == num - 1)  //是質數之數字，一定會檢查到它的前一個數字
		{
			printf("%d is a prime number!\n", num);
			break;
		}
	}
	system("pause");
}