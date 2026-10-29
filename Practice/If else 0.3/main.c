/*5. Divisibility by 3 and 5
Given an integer, display "Yes" if it is divisible by both 3 and 5; otherwise, display "No".
Sample Input         Sample Output
45                        Yes     */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    return 0;
}
