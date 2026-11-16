#include <stdio.h>
#include <stdlib.h>

int main()
{
   int e,t=0;
   while(e<5)
   {
       {
           printf("Enter an expense: ");
           scanf("%d",&e);
       }
       t=t+e;
   }
   printf("Total daily expenses = %d",t);
    return 0;
}
