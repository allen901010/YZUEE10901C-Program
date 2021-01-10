/*
姓名:李岱倫
學號:1090604
日期:2021/01/04
*/
#include <stdlib.h>
#include <stdio.h>

void draw(FILE* f, int n);

void main(void)
{
	FILE* f;
	FILE* f1;
	int n;
	char ch;
	scanf_s("%d", &n);
	fopen_s(&f, "draw1.txt", "w");
	draw(f, n);
	fclose(f);
	fopen_s(&f, "draw1.txt", "r");
	fopen_s(&f1, "draw2.txt", "w");
	while ((ch = getc(f)) != EOF)
	{
		printf("%c", ch);
		putc(ch, f1);
	}
	printf("\n");
	fclose(f);
	fclose(f1);
	system("pause");
}
void draw(FILE* f, int n)
{
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j % 2 == 1)
			{
				fprintf(f, "|");
				for (k = 1; k <= i; k++)
				{
					fprintf(f, "%d", j);
				}
				fprintf(f, "\\");
			}
			else
			{
				for (k = n - i; k >= 0; k--)
				{
					fprintf(f, "%d", j);
				}
			}
		}
		if (n % 2 == 0)
			fprintf(f, "|");
		fprintf(f, "\n");
	}
}