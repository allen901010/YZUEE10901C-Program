/*
�m�W:������
�Ǹ�:1090604
���:2020/11/20
*/

#include<stdio.h>
#include<stdlib.h>

int prime(int);
bool is_prime(int n);

int main(void)
{
	int n;    // �ĴX�Ӽ�
	int b = 0;

	printf("Enter a number  = ");
	scanf_s("%d", &n);

	printf("�� %d �ӽ�ƬO : %d\n", n, prime(n));
	system("pause");
	return 0;
}

int prime(int n)
{
	int k = 0;
	int b = 0;
	for (int num = 2; num <= INT_MAX; num++)
	{
		is_prime(num);
		if (is_prime(num) == true)
		{
			k += 1;

			if (k == n)
			{
				return num;
				break;
			}
		}
	}
}

bool is_prime(int n)
{
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}