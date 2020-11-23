#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num, i=0, Max=INT_MIN, Max2=INT_MIN, sum=0;

	do {
		printf("Enter next number:");
		scanf_s("%d", &num);
		if (num > Max) {
			Max2 = Max;
			Max = num;
		}
		else if (num > Max2) {
			Max2 = num;
		}
		sum = sum + num;
		i++;
	} while (num != -1);
	printf("Max=%d\n", Max);
	printf("Max2=%d\n", Max2);
	printf("averge=%.3f\n.", (float)(sum + 1) / i);

	system("pause");

}