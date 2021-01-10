/*
姓名:李岱倫
學號:1090604
日期:2020/12/13
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct STUDENT
{
	char name[10];
	int english;
	int program;
	int math;
	float average;
}std1, std2;

void get_student_data(STUDENT* s);
void output_student_data(STUDENT s);
void main(void)
{
	STUDENT* pstd;
	STUDENT* pstd1;
	STUDENT a[4];
	int max;
	int s;

	printf("Q1\n");
	pstd = &std1;
	get_student_data(&std1);
	std1.average = float(std1.english + std1.program + std1.math) / 3;
	printf("\n");
	get_student_data(&std2);
	std2.average = float(std2.english + std2.program + std2.math) / 3;
	printf("\n");

	output_student_data(std1);
	printf("\n");
	output_student_data(std2);
	printf("\n");
	printf("\nQ2\n\n");
	pstd->english -= 10;
	pstd->math += 5;
	pstd->average = float(pstd->english + pstd->program + pstd->math) / 3;
	output_student_data(*pstd);

	printf("\nQ3\n\n");
	pstd1 = new STUDENT;
	get_student_data(pstd1);
	output_student_data(*pstd1);
	delete pstd1;

	printf("\nQ4\n\n");

	for (int i = 0; i < 4; i++)
	{
		get_student_data(&a[i]);
		printf("\n");
	}

	for (int i = 0; i < 4; i++)
	{
		max = a[0].average;
		if (a[i].average > max)
		{
			max = a[i].average;
			s = i;
		}
	}
	printf("平均最高的是 : \n");
	output_student_data(a[s]);

	system("pause");
}
void get_student_data(STUDENT* s)
{
	printf("Name : ");
	gets_s(s->name);
	printf("\nenglish grade ：");
	scanf_s("%d", &s->english);
	printf("\nprogram grade : ");
	scanf_s("%d", &s->program);
	printf("\nmath grade : ");
	scanf_s("%d", &s->math);
	s->average = float(s->english + s->program + s->math) / 3;
	getchar();
}
void output_student_data(STUDENT s)
{
	printf("Name is : %s\n", s.name);
	printf("English grade  is : %d\n", s.english);
	printf("Program grade is : %d\n", s.program);
	printf("Math grade is : %d\n", s.math);
	printf("Average grade is : %f\n", s.average);
}