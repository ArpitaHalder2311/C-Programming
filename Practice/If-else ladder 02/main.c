#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 20;
    if(age<16)
    {
        printf("You're an adolecent!\n");
    }
    else if(age<30)
    {
        printf("You're young!");
    }
    else
    {
        printf("You're middle aged");
    }
    return 0;
}
