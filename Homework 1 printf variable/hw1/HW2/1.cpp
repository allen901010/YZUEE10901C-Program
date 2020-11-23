#include<stdio.h>
#include<stdlib.h>

void main(void)
{	
	printf("A\tA+2\tA+4\tA+6\n\n");

	int A = 3;
	printf("%d\t%d\t%d\t%d\n",A,A+2,A+4,A+6);

	A = 6;
	printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);

	A = 9;
	printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);

	A = 12;
	printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);

	A = 15;
	printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);

	system("pause");
}