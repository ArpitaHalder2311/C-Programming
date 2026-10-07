#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, sum;


    printf("number 1 is:");
    scanf("%f", &num1);

    printf("number 2 is:");
    scanf("%f", &num2);

    sum=num1 + num2;

    printf("sum is %0.1f", sum);


    return 0;
}
