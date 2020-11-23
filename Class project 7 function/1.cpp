#include<stdio.h>
#include<stdlib.h>

void cmp(int x)
{
    int k = -1;
    float sum = 1;
    for (int i = 1; i <= x; i++)
    {
        printf("S=1/1");
        for (float j = 2; j <= i; j++)
        {
            printf(" %+d/%.0f", k, j);
            sum += (1 / j) * k;
            k = k * (-1);
        }
        printf("=%.3f\n", sum);
        k = -1;
        sum = 1;
    }
}
void S(int x)
{
    float sum = 0;
    int k = 1;
    for (float i = 1; i <= x; i++)
    {
        sum += (1 / i) * k;
        k = k * -1;
    }
    printf("S(%d)=%.3f", x, sum);
}
int main(void)
{
    int num1 = 0;
    printf("你要幾行?");
    scanf_s("%d", &num1);
    cmp(num1);
    S(num1);
    system("pause");
}


<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=1.cpp&amp;type=3&amp;id=3114831" id="form1">
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
