#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g;
    printf("Enter student g (0-100):");
    if(scanf("%d", &g) != 1 ){
            printf("Invalid input.\n");
            return 1;
    }
    if(g < 0 || g > 100){
    printf("Invalid Score\n");
    }else if ( g >= 90){
        printf("The grade is A\n");
        }else if ( g >= 80){
           printf("The grade is b\n");
            }else if( g >= 70 ){
             printf("The grade is c\n");
              }else if( g >= 60 ){
                  printf("The grade d\n");
                    }else{
                     printf("The grade f\n");
              }





    return 0;
}
