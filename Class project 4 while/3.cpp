/*
���:2020/10/12
�Ǹ�:1090604
�m�W:������
*/

#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	int number;
	printf("Enter a postive number: ");
	scanf_s("%d", &number);

	while (number<=0)
	{
		
		printf("%d is not a postive number!\n", number);
		printf("�Э��s��J");
		scanf_s("%d", &number);
		
		

	}

	printf("%d is a postive number!\n", number);
	system("pause");

}



