/*
�m�W:������
�Ǹ�:1090604
���:2020/09/28
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 16;
	int b = 25;

	printf("%d�Ӧ�ƬO%d\n", a, a % 10);
	printf("%d�Ӧ�ƬO%d\n", b, b % 10);
	printf("a and b�Ӧ�ƪ��M��%d\n", (a % 10)+ (b % 10));
	printf("%d�Q��ƬO%d\n", a, a / 10);
	printf("%d�Q��ƬO%d\n", b, b / 10);
	printf("a and b�Q��ƪ��M��%d\n",(a / 10)+(b / 10) );
	system("pause");
	return 0;

}



