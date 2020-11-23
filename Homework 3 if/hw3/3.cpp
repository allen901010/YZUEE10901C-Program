#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c, d, e;
    printf("Enter a=");
    scanf_s("%d", &a);
    printf("Enter b=");
    scanf_s("%d", &b);
    printf("Enter c=");
    scanf_s("%d", &c);
    printf("Enter d=");
    scanf_s("%d", &d);
    printf("Enter e=");
    scanf_s("%d", &e);
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    if (max < e)
        max = e;
    printf("Max=%d\n", max);
    int min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;
    if (min > e)
        min = e;
    printf("Min=%d\n", min);
    int sum = a + b + c + d + e;
    printf("Sum=%d\n", sum);
    float average = (float)sum / 5.0;
    printf("Average=%f\n", average);
    system("pause");
    return 0;
}