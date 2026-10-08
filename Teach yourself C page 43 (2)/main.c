/*2. Write a program that asks the user for an integer and then tells
the user if that number is even or odd. (Hint, use C’s modulus
operator %.) */



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,remainder;

    printf("value of num:");
    scanf("%d",&num);
    remainder=num%2;
    if(remainder==0){
        printf("The number is even");
    }else{
        printf("The number is odd");
    }
    return 0;
}
