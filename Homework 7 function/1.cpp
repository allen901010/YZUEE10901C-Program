/*
姓名:李岱倫
學號:1090604
日期:2020/11/20
*/

#include<stdio.h>
#include<stdlib.h>

float power(float, int);
float fact(int);
float f1(int);
float f2(int);
int main(void)
{
	float x;
	int n;
	int a;
	int b;

	printf("請輸入底數 = ");
	scanf_s("%f", &x);
	printf("請輸入指數 = ");
	scanf_s("%d", &n);

	printf("%f ^ %d = ", x, n);
	printf("%f\n", power(x, n));

	printf("請輸入次數 = ");
	scanf_s("%d", &a);
	printf("%f", f1(a));

	printf("請輸入次數 = ");
	scanf_s("%d", &b);
	printf("%f", f2(b));

	system("pause");
	return 0;
}

float power(float x, int n)
{
	if (n == 0)
		return 1;
	else
		return (x*power(x, n - 1));
}

float fact(int m)
{
	if (m > 0)
		return (m*fact(m - 1));
	else
		return 1;
}
float f1(int a)
{
	float sum1 = 0;
	while (a != 0)
	{
		sum1 = sum1 + (1 / power(2, a));
		a--;
	}
	return sum1;
}

float f2(int b)
{
	float sum2 = 0;
	while (b != 0)
	{
		sum2 = sum2 + (1 / fact(b));
		b--;
	}
	return sum2;
}

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=1.cpp&amp;type=3&amp;id=3121990" id="form1">
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
