/*
姓名:李岱倫
學號:1090604
日期:2020/11/20
*/

#include<stdio.h>
#include<stdlib.h>

double power(float, int);

double my_fun(int);

int main(void)
{
	float x;
	int n;
	int a;

	printf("請輸入次數 = ");
	scanf_s("%d", &a);
	printf("%f", my_fun(a));

	system("pause");
	return 0;
}

double power(float x, int n)
{
	if (n == 0)
		return 1;
	else
		return (x*power(x, n - 1));
}

double my_fun(int a)
{
	double sum1 = 0;
	while (a != 0)
	{
		sum1 = sum1 + (1 / power(2, a));
		a--;
	}
	return sum1;
}

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=4.cpp&amp;type=3&amp;id=3121993" id="form1">
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
