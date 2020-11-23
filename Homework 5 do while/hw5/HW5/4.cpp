#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char k;
	printf("Enter a char =");
	scanf_s("%c", &k);
	switch (k)
	{
	case 'a':
		printf("this is lower case letter\nupper case letter is A\n");
		break;
	case 'b':
		printf("this is lower case letter\nupper case letter is B\n");
		break;
	case 'c':
		printf("this is lower case letter\nupper case letter is C\n");
		break;
	case 'd':
		printf("this is lower case letter\nupper case letter is D\n");
		break;
	case 'A':
		printf("this is upper case letter\nlower case letter is a\n");
		break;
	case 'B':
		printf("this is upper case letter\nlower case letter is b\n");
		break;
	case 'C':
		printf("this is upper case letter\nlower case letter is c\n");
		break;
	case 'D':
		printf("this is upper case letter\nlower case letter is d\n");
		break;
	default:
		printf("No processing the letter\n");
	}
	system("pause");
}