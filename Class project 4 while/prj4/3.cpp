#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int input;
    printf("Enter a positive number : ");
    scanf_s("%d", &input);
    while (input <= 0)
    {
        printf("%d is not a positive number!\n", input);
        printf("Enter a positive number : ");
        scanf_s("%d", &input);
    }
    printf("%d is a positive number!\n", input);
    system("pause");
}