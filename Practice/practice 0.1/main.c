/*39. Input three numbers and print the largest.
Input: 5 9 3
Output: 9*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
      if(a%2 !=0 && a!=2)
      {
       printf("31 days");
      }

     else if(a%2==0 && a!=2)
     {
          printf("30 days");
     }

     else
     {
          printf("February");
     }


    return 0;
}
