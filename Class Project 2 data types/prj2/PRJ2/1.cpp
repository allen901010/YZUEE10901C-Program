/*
���: 2020/10/16
�Ǹ�: 1060558
�m�W: �®۳s
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 16;
	int b = 25;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("%d�Ӧ�ƬO%d\n", a, a % 10);
	printf("%d�Ӧ�ƬO%d\n", b, b % 10);
	printf("a and b�Ӧ�ƪ��M��%d\n", (a % 10) + (b % 10));
	printf("%d�ӤQ�ƬO%d\n", a, a / 10);
	printf("%d�ӤQ�ƬO%d\n", b, b / 10);
	printf("a and b�Q��ƪ��M��%d\n", (a / 10) + (b / 10));
	system("pause");
}