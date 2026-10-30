/*1.
Write a program that requests two numbers and then displays
either their sum or product, depending on what the user selects.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,select;
    scanf("%d %d",&num1,&num2);
    printf("Enter 1 for sum or 2 for product: ");
    scanf("%d", &select);
    if(select==1){
        printf("sum will display=%d\n",num1+num2);
    }else if(select==2){
        printf("product will play=%d\n",num1*num2);
    }else{
        printf("Invalid choice\n");
    }

    return 0;
}
