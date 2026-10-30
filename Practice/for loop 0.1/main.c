#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char word[50];
    printf("write a word");
    scanf("%s",word);
    for(i=0;i<50;i++)
    {
        printf("%s\t",word);
    }
    return 0;
}
