/*
日期:2020/10/12
學號:1090604
姓名:李岱倫
*/

#include <stdlib.h>
#include <stdio.h>

void main(void)

{
	float L = 3000;
	int D = 0;
	printf("現有繩長3000，每天剪一半要幾天長度會小於5?\n");
	system("pause");
	printf("\n\n");

	while (L>=5)
	{
		L = L / 2;
			D++;
	
	}
	printf("總共需要%d天\n", D);

	system("pause");

}



