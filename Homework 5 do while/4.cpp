/*
學號；1090604
日期:109/10/24
姓名:李岱倫
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)

{
	char c;
	printf("請輸入字元\n");
	scanf_s("%c", &c);

	switch (c) {
	case 'a':
		printf("%c此為小寫，大寫為A\n", c);
		break;
	case 'b':
		printf("%c此為小寫，大寫為B\n", c);
		break;
	case 'c':
		printf("%c此為小寫，大寫為C\n", c);
		break;
	case 'd':
		printf("%c此為小寫，大寫為D\n", c);
		break;
	case 'A':
		printf("%c此為大寫，小寫為a\n", c);
		break;
	case 'B':
		printf("%c此為大寫，小寫為b\n", c);
		break;
	case 'C':
		printf("%c此為大寫，小寫為c\n", c);
		break;
	case 'D':
		printf("%c此為大寫，小寫為d\n", c);
		break;
	default:
		printf("此字元不處理");
	}
	system("pause");
}

