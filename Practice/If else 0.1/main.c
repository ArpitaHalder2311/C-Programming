/*1. Even or Odd
Given an integer, display "Even" if it is divisible by 2; otherwise, display "Odd".
Sample Input        Sample Output
   8                    Even        */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,remainder;
    printf("Enter the number:");
    scanf("%d",&n);
    remainder = n%2;
    if(remainder == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
