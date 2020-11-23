/*
ら戳: 2020/10/16
厩腹: 1060558
﹎: 谅硈
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 16;
	int b = 25;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("%d计琌%d\n", a, a % 10);
	printf("%d计琌%d\n", b, b % 10);
	printf("a and b计㎝%d\n", (a % 10) + (b % 10));
	printf("%d计琌%d\n", a, a / 10);
	printf("%d计琌%d\n", b, b / 10);
	printf("a and b计㎝%d\n", (a / 10) + (b / 10));
	system("pause");
}