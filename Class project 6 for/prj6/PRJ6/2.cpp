#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i = 0, n = 0, j = 0;
	printf("n=");
	scanf_s("%d", &n);
	printf("(A)\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("(B)\n");
	for (i = n; i > 0; i--) {
		for (j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}


	system("pause");
}