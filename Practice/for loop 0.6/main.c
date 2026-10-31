#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
    printf("Enter number :");
    scanf("%d",&n);
    /* =a+(n-1)*d
       =4+(n-1)*3
       =3*n+1 */
    for(int i=1; i<=3*n+1; i=i+3)
    {
        printf("%d ",i);
        if(i<3*n+1)
        {
            printf(",");
        }
    }
    return 0;
}

