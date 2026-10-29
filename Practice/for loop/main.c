/*1. Print Numbers from 1 to N
Recommended loop: for
Write a C program that takes a positive integer N and prints all integers from 1 to N.
Sample Input:
5
Sample Output:
1 2 3 4 5          */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter positive number:");
    scanf("%d",&n);
    for(n=1;n<6;n++)
    {
        printf("%d ",n);
    }
    return 0;
}
