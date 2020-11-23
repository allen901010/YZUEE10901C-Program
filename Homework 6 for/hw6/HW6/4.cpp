#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	bool numberFound = false;
	int nowCheck = 1;
	while (numberFound == false)
	{
		if (nowCheck % 3 == 1 && nowCheck % 5 == 3 && nowCheck % 7 == 2)
		{
			numberFound = true;
			printf("¦³%d°¦\n",nowCheck);
		}
		nowCheck++;
	}

	
    system("pause");
    return 0;
}