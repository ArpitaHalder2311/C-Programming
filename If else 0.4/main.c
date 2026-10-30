#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
   if(b)
    {
    printf("%d\n", a/b);
    }
   else
   {
    printf("Cannot divide by zero.\n");
   }
    return 0;
}
