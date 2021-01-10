/*
學號:1090604
日期:109/12/20
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
bool is_palindrome(int);
int find_nth_palindrome(int);
int main(void)
{
	int a, b;//a:input  b:output
	printf("Find the palindrme:");
	scanf_s("%d", &a);
	b = find_nth_palindrome(a);
	printf("The %dth palindrome:%d\n", a, b);
	system("pause");
}
int find_nth_palindrome(int a)
{
	if (a < 1)
		printf("Error!!\n");
	int i = 1, j = 1;
	while (i <= a)
	{
		if (is_palindrome(j) == true)
		{
			i++;
		}
		j++;
	}
	return j - 1;
}
bool is_palindrome(int a)
{
	int b = 0, c = a, d;//a:判斷是否為回文數 b:a帶入後的值 c:保存a的值
	do
	{
		d = a % 10;
		b = b * 10 + d;
		a = a / 10;
	} while (a != 0);
	if (c == b)
		return true;
	else
		return false;
}