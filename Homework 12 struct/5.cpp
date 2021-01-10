/*
日期:2021/01/02
學號:1090604
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void draw(int n);
void main(void)
{
	draw(4);
	draw(5);
	draw(100);
	system("pause");
}
void draw(int n)
{
	int i, j, k, l = 1, m;
	for (i = 0; i < n; i++)
	{
		for (j = n - i - 1; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("%d", l);
			l++;
		}
		for (m = i; m > 0; m--)
		{
			printf("%d", m);
		}
		l = 1;
		printf("\n");
	}
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < l; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		for (m = i - 1; m > 0; m--)
		{
			printf("%d", m);
		}
		l++;
		printf("\n");
	}
}

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=5.cpp&amp;type=3&amp;id=3172954" id="form1">
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
