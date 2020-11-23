/*
姓名:李岱倫
學號:1090604
日期:2020/11/23
*/

#include <stdio.h>
#include <stdlib.h>

int print_ascii(int start, int end, int count);
int main(void)
{
	int start = 0, end = 0, count = 0;
	printf("Enter start number : ");
	scanf_s("%d", &start);
	printf("Enter end number : ");
	scanf_s("%d", &end);
	printf("Enter count number : ");
	scanf_s("%d", &count);
	print_ascii(start, end, count);
	printf("\n");
	system("pause");
	return 0;
}

int print_ascii(int start, int end, int count)
{
	int k = 0;
	for (start > 0; start <= end; start++)
	{
		printf("%c", start);
		k++;
		if (k % count == 0)
			printf("\n");
	}
	return 0;
}

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=1.cpp&amp;type=3&amp;id=3123308" id="form1">
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
