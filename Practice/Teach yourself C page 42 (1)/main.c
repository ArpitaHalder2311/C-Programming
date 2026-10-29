#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer;
    printf("What is 10+14? ");
    scanf("%d",&answer);
    if (answer == 10+14){
        printf("Right!");
    }else{
        printf("Wrong");
    }
    return 0;
}
