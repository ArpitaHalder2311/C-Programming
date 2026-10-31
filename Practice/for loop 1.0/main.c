/* Take an integer N and print from N down to 1.

Sample Input:
5

Sample Output:
5 4 3 2 1*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int a=5;
    for( int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a-1;

    }
    return 0;
}
