/*
���:2020/10/4
�Ǹ�:1090604
�m�W:������
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float a = 3.569222;
	float b = 8.76;
	float c = 12.81234;
	float d=floor(c);
	int e = (int)d;
	


	printf("�T�Ӥp��: %.6f, %.2f, %.5f\n", a, b, c);
	printf("����=%.2f\n", (a + b + c) / 3);
	printf("%.5f����Ƭ�%d\n", c, (int)floor(c));
	printf("%.f���Ӧ�Ƶ���=%d\n",d , e%10);
	printf("%.f���Q��Ƶ���=%d\n", d, e/10 % 10);

	


	system("pause");
	return 0;

}


