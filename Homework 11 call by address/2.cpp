/*
�Ǹ�:1090604
���:109/12/20
�m�W:������
*/
#include<stdio.h>
#include<stdlib.h>
void tra(float*a);
int main(void)
{
	float a ,b ;
	printf("��J�����ഫ���^�T");
	scanf_s("%f", &a);
	b = a;
	tra(&a);
	printf("%.2f��������%.3f�^�T", b, a);
	system("pause");
}
void tra(float*a)
{
	*a = *a*0.394;
}