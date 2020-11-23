#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 18 == 0)
        {
            printf("%d\ ", i);
        }
        i++;
    }
    printf("\n");
    system("pause");
}