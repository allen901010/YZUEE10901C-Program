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
};
void get_student_data(DATE* s);
void output_student_data(DATE s);
void main(void)
{
	int a;
	DATE s[3];
	for (int i = 0; i < 3; i++)
	{
		get_student_data(&s[i]);
	}
	printf("id:");
	scanf_s("%d", &a);
	for (int i = 0; i < 3; i++)
	{
		if (a == s[i].id)
		{
			output_student_data(s[i]);
		}
	}
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
	float a = 0;
	a = (float)(s.mid + s.final) * 0.3 + (float)(s.usual * 0.4);
	printf("學期成績:%f", a);
}