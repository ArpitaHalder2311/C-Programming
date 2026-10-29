/*7. Grade Classification
Given a mark from 0 to 100, display A for 80-100, B for 70-79, C for 60-69, D for 50-59, and F for
below 50.
Sample Input          Sample Output
76                          B       */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Enter mark ");
    scanf("%d",&mark);
    if(mark>=80)
    {
        printf("A");
    }
    else if(mark>=70)
    {
        printf("B");
    }
    else if(mark>=60)
    {
        printf("c");
    }
    else if(mark>=50)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}
