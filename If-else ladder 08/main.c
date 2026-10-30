/*9. Number Category
Given an integer, display "Both" if divisible by both 2 and 3, "Only 2" if divisible only by 2, "Only 3" if
divisible only by 3, or "Neither" otherwise.
Sample Input        Sample Output
18                      Both      */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Sample Input");
    scanf("%d",&n);
    if(n%2==0 && n%3==0)
    {
        printf("Both");
    }
    else if(n%2==0)
    {
        printf("Only 2");
    }
    else if(n%3==0)
    {
        printf("Only 3");
    }
    else
    {
        printf("Neither");
    }
    return 0;
}
