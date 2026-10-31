#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    /* =a+(n-1)*d
       =1+(n-1)*2
       =2*n-1 */
    for(int i=1; i<=2*n-1; i=i+2)
    {
        printf("%d ",i);
        if(i<2*n-1)
        {
            printf(",");
        }
    }
    return 0;
}
