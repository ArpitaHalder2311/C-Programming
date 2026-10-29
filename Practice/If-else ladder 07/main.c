/*8. Triangle Validity
Given three positive side lengths, display "Valid" if the sum of any two sides is greater than the third
side; otherwise, display "Invalid".
Sample Input        Sample Output
3 4 8                  Invalid         */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter input");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
