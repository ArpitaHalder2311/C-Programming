//Display this ap -100,97,94....upto all terms are negative

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=100;
    for( int i=1;a>0;i++)
    {
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}


/*int main()
{
  [an=a+(n-1)*d
    =100+(n-1)*3
    =3*n-97
    3*n-97>0
    n>97/3]

    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int a=100;
    for( int i=1;i<=n;i++)
    {
        printf("%d",a);
        a=a-3;
        if(i<n)
        printf(",");

    }
    return 0;
