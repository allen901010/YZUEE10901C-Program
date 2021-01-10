#include<stdio.h>
#include<stdlib.h>

void draw(int m, int n)
{
	int x = ((n - 1) * 4) % m;
	int a = 65, b = 65 + x - 1;

	for (int i = 1; i <= n; i++)
	{
		if (a > 65 + m - 1)
			a = 65;
		printf("%c", a);
		a++;
	}
	printf("\n");
	for (int i = 2; i < n; i++)
	{
		if (b < 65)
			b = 65 + m - 1;
		if (a > 65 + m - 1)
			a = 65;
		printf("%c", b);
		for (int j = 2; j < n; j++)
		{
			printf(" ");
		}
		printf("%c\n", a);
		a++;
		b--;
	}
	for (int i = 1; i <= n; i++)
	{
		if (b < 65)
			b = 65 + m - 1;
		printf("%c", b);
		b--;
	}
	printf("\n");
}

int main(void)
{
	int a1, b1;
	printf("¿é¤Jm,n:\n");
	scanf_s("%d%d", &a1, &b1);
	draw(a1, b1);
	system("pause");
}