/*
�Ǹ��F1090604
���:109/10/24
�m�W:������
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)

{
	char c;
	printf("�п�J�r��\n");
	scanf_s("%c", &c);

	switch (c) {
	case 'a':
		printf("%c�����p�g�A�j�g��A\n", c);
		break;
	case 'b':
		printf("%c�����p�g�A�j�g��B\n", c);
		break;
	case 'c':
		printf("%c�����p�g�A�j�g��C\n", c);
		break;
	case 'd':
		printf("%c�����p�g�A�j�g��D\n", c);
		break;
	case 'A':
		printf("%c�����j�g�A�p�g��a\n", c);
		break;
	case 'B':
		printf("%c�����j�g�A�p�g��b\n", c);
		break;
	case 'C':
		printf("%c�����j�g�A�p�g��c\n", c);
		break;
	case 'D':
		printf("%c�����j�g�A�p�g��d\n", c);
		break;
	default:
		printf("���r�����B�z");
	}
	system("pause");
}

