#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);

    return 0;
}
