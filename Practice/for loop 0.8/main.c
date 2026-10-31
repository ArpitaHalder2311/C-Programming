#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a=a*2;
        if(i<n)
        {
            printf(",");
        }
    }

    return 0;
}
