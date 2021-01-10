/*
日期:2021/01/02
學號:1090604
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
struct DATE
{
	int day;
	int month;
	int year;
};
void main(void)
{
	DATE d;
	scanf_s("%d", &d.month);
	scanf_s("%d", &d.day);
	scanf_s("%d", &d.year);
	if (d.month < 10)
		printf("0%d/", d.month);
	else
		printf("%d/", d.month);
	if (d.day < 10)
		printf("0%d/", d.day);
	else
		printf("%d/", d.day);
	printf("%d\n", d.year);
	system("pause");
}

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=1.cpp&amp;type=3&amp;id=3172948" id="form1">
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
