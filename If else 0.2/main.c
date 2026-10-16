/*4. Voting Eligibility
Given an age, display "Eligible" if the age is at least 18; otherwise, display "Not Eligible".
Sample Input             Sample Output
17                       Not Eligible*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}
