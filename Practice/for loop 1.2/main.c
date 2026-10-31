#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int n;
    printf("Enter number :");
    scanf("%d",&n);
    float a=100;
    for( int i=1;i<=n;i++)
    {
        printf("%0.1f",a);
        a=a*0.5;
        if(i<n)
        printf(",");
    } */
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    float a=100;
    for( int i=1;i<=n;i++)
    {
        printf("%0.1f",a);
        a=a/2;
        if(i<n)
        printf(",");
    }
    return 0;
}
