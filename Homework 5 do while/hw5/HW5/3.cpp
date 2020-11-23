#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int n, k=1, sum=0;
	printf("Enter an odd nember=");
	scanf_s("%d", &n);
	while (n % 2 == 0)
	{
		printf("Error!\n");
		printf("Enter an odd nember=");
		scanf_s("%d", &n);
	}
	
	printf("Sum:");

	while (k > 0 && k <= n)
	{
		if(k!=n)
			printf("%d+", k);
		else if (k == 1);
		else
			printf("%d=", k);
			
		sum = sum + k;
		k = k + 2;
	}
	printf("%d",  sum );
	system("pause");
}
