#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int i, n = 45;
    bool flag = false;
    int prime = n - 1;
    while (!flag)
    {
        for (i = 2; i < prime; i++)
            if (prime % i == 0)   // not a prime
            {
                prime--;
                continue;
            }
        flag = true;
    }
    printf("�p��%d���̤j��Ƭ�%d\n", n, prime);

    system("pause");
    return 0;
}