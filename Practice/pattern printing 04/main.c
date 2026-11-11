#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Enter the line number of row and column:");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d ",j);
        }
    printf("\n");
   }
    return 0;
}
