#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    if(b)
    {
         printf("%d\n",a/b);
    }
    else
    {
    printf("cannot divide by zero\n");
    }
    return 0;
}
