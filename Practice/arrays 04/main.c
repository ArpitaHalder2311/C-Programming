#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={2,5,5,6,8};
    arr[0]=1; //1,5,5,6,8
    arr[1]=2;//1,2,5,6,8
    printf("The value is %d\n",arr[1]);
    return 0;
}
//update
