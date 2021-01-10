/*
日期:2021/01/02
學號:1090604
姓名:李岱倫
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct DATE
{
	int id;
	char name[10];
	int mid;
	int final;
	int usual;
	float average;
};
void get_student_data(DATE* s);
void output_student_data(DATE s);
void main(void)
{
	float c = 0;
	int a = 0, max = 0, b = 0;
	DATE s[3];
	for (int i = 0; i < 3; i++)
	{
		get_student_data(&s[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		c = (float)(s[i].mid + s[i].final) * 0.3 + (float)(s[i].usual * 0.4);
		s[i].average = c;
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		if (s[i].average >= s[max].average)
			max = i;
	}
	for (int i = 0; i < 3; i++)
	{
		if (s[i].average < s[max].average)
			a = i;
	}
	for (int i = 0; i < 3; i++)
	{
		if (s[i].average < s[a].average)
			b = i;
		if (s[i].average > s[a].average && s[i].average < s[max].average)
		{
			b = a;
			a = i;
		}
	}
	output_student_data(s[max]);
	output_student_data(s[a]);
	output_student_data(s[b]);
	system("pause");
}
void get_student_data(DATE* s)
{
	printf("name:");
	gets_s(s->name);
	printf("id:");
	scanf_s("%d", &s->id);
	printf("mid:");
	scanf_s("%d", &s->mid);
	printf("final:");
	scanf_s("%d", &s->final);
	printf("usual:");
	scanf_s("%d", &s->usual);
	getchar();
}
void output_student_data(DATE s)
{
	printf("name:%s\n", s.name);
	printf("id:%d\n", s.id);
	printf("mid:%d\n", s.mid);
	printf("final:%d\n", s.final);
	printf("usual:%d\n", s.usual);
	printf("學期成績:%f\n", s.average);
}

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><title>

</title></head>
<body>
    <form method="post" action="./File_DownLoad_Wk_zip.aspx?File_name=4b.cpp&amp;type=3&amp;id=3172953" id="form1">
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
