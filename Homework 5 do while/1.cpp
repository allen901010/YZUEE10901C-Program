/*
�Ǹ��F1090604
���:109/10/24
�m�W:������
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)

{
	printf("�L�X1��500�i�Q7��3�㰣�����i�Q2�㰣���Ʀr\n");
	int a = 1;
	do {
		if (a % 21 == 0 && a % 2 != 0)
		
				printf("%d\n", a);
			
		a++;
	} while (a <= 500);
	system("pause");

}

