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
	float height, weight, c, d;
	printf("�п�J�����P�魫\n");
	scanf_s("%f %f", &height, &weight);
	c = height / 100;
	d = weight / (c * c);
	printf("%.2f\n", d);
	if (d < 18.5)
	{
		printf("�魫�L��\n");
	}
	else if (d >= 18.5 && d < 24)
	{
		printf("�魫�з�\n");
	}
	else if (d >= 24)
	{
		printf("�魫�L��\n");
	}
	

	system("pause");
	return 0;
}



