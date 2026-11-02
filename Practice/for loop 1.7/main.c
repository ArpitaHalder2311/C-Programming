#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int n;
    printf("Enter number:");
    scanf("%d",&n);*/
    int i;
    for(int i=1;i<=100;i++)
    {
         if(i%2)
    {
        continue;
    }

    printf("%d ",i);
    }
    return 0;
}
