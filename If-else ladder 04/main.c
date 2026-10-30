/*3. Compare Two Numbers
Given two integers, display "First" if the first is larger, "Second" if the second is larger, or "Equal" if
both are equal.
Sample Input    Sample Output
15 22             Second*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("First\n");
    }
    else if(b>a)
    {
        printf("Second\n");
    }
    else
    {
        printf("Equal\n");
    }
    return 0;
}
