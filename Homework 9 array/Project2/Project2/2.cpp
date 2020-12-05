/*
姓名:李岱倫
學號:1090604
日期:2020/12/05
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void getnumber();       //存入自己選的號碼到矩陣
void mynumber();        //印出自己選的號碼
void randomnumber();    //產生隨機號碼
void printluckynumber();//印出樂透號碼
void checknumber();     //檢查中獎號碼

int lockynumber[6] = { -1 };
int arr[6] = { 0 };
int check[] = { 0 };

int main(void)
{
	getnumber();
	mynumber();
	randomnumber();
	printluckynumber();
	checknumber();

	system("pause");
	return 0;
}

void getnumber()
{
	int i, k;
	srand(time(NULL));

	printf("Enter 6 different number\n");
	printf("Between 1~49\n\n");

	for (i = 0; i < 6; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf_s("%d", &arr[i]);
		if (arr[i] < 1 || arr[i]>49) {
			printf("!!! Please Enter The Number Between 1~49 !!!\n");
			i--;
		}
		for (k = 0; k < i; k++) {
			if (arr[i] == arr[k]) {
				printf("!!! Please Enter Different Number !!!\n");
				i--;
			}
		}
	}
}

void mynumber()
{
	printf("您的樂透號碼 : ");
	for (int a = 0; a < 6; a++)
	{
		if (a < 5)
			printf("%2d,", arr[a]);
		else
			printf("%2d\n", arr[a]);
	}
}

void randomnumber()
{
	int m, UnCheckLockyNumber;

	for (int k = 0; k < 6; k++)
	{
		UnCheckLockyNumber = 1 + rand() % 49;
		for (m = 0; m < k; m++) {
			if (UnCheckLockyNumber == lockynumber[m])
			{
				k--;
				break;
			}
		}
		if (UnCheckLockyNumber != lockynumber[m])
			lockynumber[k] = UnCheckLockyNumber;
	}
}
void printluckynumber()
{
	printf("電腦樂透號碼 : ");
	for (int y = 0; y < 6; y++)
	{
		if (y < 5)
			printf("%2d,", lockynumber[y]);
		else
			printf("%2d", lockynumber[y]);
	}
	printf("\n");
}
void checknumber()
{
	int r;
	int k = 0;
	printf("我中的號碼 : ");
	for (int n = 0; n < 6; n++) {
		for (int m = 0; m < 6; m++) {
			if (arr[n] == lockynumber[m]) {
				check[k] = arr[n];
				k += 1;
			}
		}
	}
	for (r = 0; r < k; r++) {
		if (check[r] != 0 && (r + 1) != k)
			printf("%2d,", check[r]);
		if (check[r] != 0 && (r + 1) == k)
			printf("%2d", check[r]);
		if (check[r] == 0)
			break;
	}
	printf("\n其中%d個號碼\n", r);
}