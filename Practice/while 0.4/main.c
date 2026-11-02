#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1234,r=0,sum,original=1234 ;
sum=r+original;
   while(n!=0)
   {
       r=r*10;
       r=r+n%10;
       n=n/10;
   }
   printf("%d",r);

   printf("%d+%d = %d",n,r,sum);

    return 0;
}
