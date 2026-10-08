#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Number is negative");
    }
    if(num>0){
        printf("Number is non-negative");
    }

    return 0;
}
