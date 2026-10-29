#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day; // 1-mon; 2-tues; 3-wed
    printf("enter day(1-7) :");
    scanf("%d", &day);
    switch (day){

    case 1 : printf("monday \n");
             break ;
    case 2 : printf("tuesday \n");
             break ;
    case 3 : printf("wednesday \n");
             break ;
    case 4 : printf("thursday \n");
             break ;
    case 5 : printf("friday \n");
             break ;
    case 6 : printf("saturday \n");
             break ;

   default : printf("not a valid day");

}
    return 0;
}
