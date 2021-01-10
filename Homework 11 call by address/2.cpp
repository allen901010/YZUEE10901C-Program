/*
學號:1090604
日期:109/12/20
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
void tra(float*a);
int main(void)
{
	float a ,b ;
	printf("輸入公分轉換成英吋");
	scanf_s("%f", &a);
	b = a;
	tra(&a);
	printf("%.2f公分等於%.3f英吋", b, a);
	system("pause");
}
void tra(float*a)
{
	*a = *a*0.394;
}