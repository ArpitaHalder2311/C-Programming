/*10. Middle of Three
Given three distinct integers, display the number that is neither the largest nor the smallest.
Sample Input            Sample Output
9 3 6                          6        */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter number");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && a>c  )
    {
        printf("%d",a);
    }
    else if(a>b && b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }

    return 0;
}
