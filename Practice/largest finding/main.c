#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,digit,largest=0;
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        if(digit>largest)
    {
        largest=digit;
    }
    n=n/10;
    }
    printf("Largest digit %d\n",largest);
    return 0;
}
