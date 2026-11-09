//reverse printing

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the element number %d\n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
