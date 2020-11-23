/*
ら戳:2020/10/4
厩腹:1090604
﹎:┃
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
	


	printf("计: %.6f, %.2f, %.5f\n", a, b, c);
	printf("キА=%.2f\n", (a + b + c) / 3);
	printf("%.5f俱计%d\n", c, (int)floor(c));
	printf("%.f计单=%d\n",d , e%10);
	printf("%.f计单=%d\n", d, e/10 % 10);

	


	system("pause");
	return 0;

}


