/*
���:2020/10/05
�Ǹ�:1090604
�m�W:������
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float  cash;
	printf("�п�J���O���B\n");
	scanf_s("%f", &cash);
	
	
	if (3000 > cash >= 1000)
	{
		printf("�馩�᪺���B��%.2f\n", cash*0.95);
	}
	else if (5000 > cash >= 3000)
	{
		printf("�馩�᪺���B��%.2f\n", cash * 0.92);
	}
	else if (10000 > cash>= 5000)
	{
		printf("�馩�᪺���B��%.2f\n", cash * 0.9);
	}
	else if (cash >= 10000)
	{
		printf("�馩�᪺���B��%.2f\n", cash * 0.85);
	}
	else
	{
		printf("��o��֬O�n�馩�Ӱ�\n");
	}

	system("pause");
	return 0;
}


