#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int amount = 12500;
    float pay = (float)amount;
    printf("消費額為 %d\n", amount);

    if (amount >= 1000 && amount < 3000)
        pay = amount * 0.95f;
    else if (amount >= 3000 && amount < 5000)
        pay = amount * 0.92f;
    else if (amount >= 5000 && amount < 10000)
        pay = amount * 0.9f;
    else if (amount >= 10000)
        pay = amount * 0.85f;

    printf("應支付的金額為%f\n", pay);
    system("pause");
    return 0;
}