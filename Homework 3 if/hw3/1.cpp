#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    float height = 1.70;
    float weight = 58.4;
    float bmi;

    bmi = weight / (height * height);
    printf("身高= %.2f 公尺\n", height);
    printf("體重= %.2f 公斤\n", weight);
    printf("BMI= %.2f\n", bmi);

    if (bmi < 18.5)
        printf("體重過輕\n");
    else if (bmi >= 24.0)
        printf("體重過重\n");
    else
        printf("體重標準\n");

    system("pause");
    return 0;
}