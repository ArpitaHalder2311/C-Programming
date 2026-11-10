//sum of all elememts

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],sum=0;
    for(int i=0;i<5;i++)
    {
          {
              printf("enter the %d element \n",i+1);
              scanf("%d",&a[i]);
          }
          sum=sum+a[i];
    }
    printf("sum is :%d",sum);
    return 0;
}

