/*2. Positive, Negative, or Zero
Given an integer, display "Positive", "Negative", or "Zero" as appropriate.
Sample Input   Sample Output
-12              Negative    */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive\n");
    }
    else if(n<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
