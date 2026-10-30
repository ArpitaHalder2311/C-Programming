/*6. Largest of Three Numbers
Given three integers, display the largest number.
Sample Input            Sample Output
14 27 19                      27         */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>b)
    {
        printf("%d",a);
    }
    else if(b>a && b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }

    return 0;
}
