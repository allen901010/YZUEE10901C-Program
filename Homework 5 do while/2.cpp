/*
�Ǹ��F1090604
���:109/10/24
�m�W:������
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)

{
	float a, b, c;
	a = 1;
	printf("      X             X*X             X+X\n");
	do {
		b = a * a;
		c = a + a;
		printf("%8.1f\t%8.2f\t%8.2f\n", a, b, c);
		a = a + 0.5;
	} while (a <= 10);
	system("pause");

}

