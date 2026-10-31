//wap to print odd numbers from 1 to 100

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }


     if(i<100)
            {
                printf(",");
            }
    }
    return 0;
}
