#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    int b=2;
    int r1=a/b;
    float r2=a/b;
    float r3=(float) a/b;
    printf("%d %f %f\n",r1,r2,r3);
    return 0;
}
