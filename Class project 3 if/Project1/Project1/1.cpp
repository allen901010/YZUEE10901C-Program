/*
���:2020/10/05
�Ǹ�:1090604
�m�W:������
*/

#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	while (1)
	{
		printf("�п�J���Z : \n");
		float grade;
		scanf_s("%f", &grade);



		if (grade < 0 || (grade > 100 && grade < 998 || grade >= 1000))
			printf("�Э��s��J�ο�J999���}\n\n");

		else if (grade >= 80 && grade <= 100)
			printf("A\n��J999���}\n");

		else if (grade >= 60 && grade <= 79)
			printf("B\n��J999���}\n");

		else if (grade >= 0 && grade <= 59)
			printf("C\n��J999���}\n");

		else if (grade == 999)
			break;


	}


	printf("Bye\n");
	system("pause");
	return 0;
}

