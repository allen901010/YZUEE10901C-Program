/*
姓名:李岱倫
學號:1090604
日期:2020/11/23
*/

#include<stdio.h>
#include<stdlib.h>

int get_nth_prime(int);
bool is_prime(int n);

int main(void)
{
	int n;    // 第幾個數
	int b = 0;

	printf("Enter a number  = ");
	scanf_s("%d", &n);

	printf("第 %d 個質數是 : %d\n", n, get_nth_prime(n));
	system("pause");
	return 0;
}

int get_nth_prime(int n)
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

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=2.cpp&amp;type=3&amp;id=3123312" id="form1">
<div class="aspNetHidden">
<input type="hidden" name="__VIEWSTATE" id="__VIEWSTATE" value="/wEPDwUKLTEzNDM3NzkxOWRkwneTr34MFXJYUKyKKda+DU4gQVM=" />
</div>

<div class="aspNetHidden">

	<input type="hidden" name="__VIEWSTATEGENERATOR" id="__VIEWSTATEGENERATOR" value="629601C3" />
</div>
    <div>
    
    </div>
    </form>
</body>
</html>
