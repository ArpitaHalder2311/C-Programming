#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i , e_days,j_years  ;

    i=10;
    i=-i;

    printf("This is i:%d\n", i);

    printf("Enter number of Earth days: ");
    scanf("%f", &e_days);

    /* now, compute Jovian years */
    j_years = e_days / (360.0 * 12.0);
    /* display the answer */
    printf("Equivalent Jovian years: %f", j_years);
    /* printf("this is a test"); */

    return 0;
}
