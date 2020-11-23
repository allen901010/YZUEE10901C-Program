#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float length = 3000;
    int day = 0;
    while (length > 5)
    {
        length /= 2.0;
        day += 1;
    }
    printf("day:%d\n", day);
    system("pause");
}