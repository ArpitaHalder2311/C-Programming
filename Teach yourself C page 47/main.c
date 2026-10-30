#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    int choice;
    printf("1:Feet to meters, 2:Meters to Feet.");
    printf("Enter choice:");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter the of feet:");
        scanf("%f",&num);
        printf("Meters: %f, num/3.28");
         } else {
    printf("Enter number of meters: ");
    scanf("%f", &num);
    printf("Feet: %f", num*3.28);

    }
    return 0;
}
