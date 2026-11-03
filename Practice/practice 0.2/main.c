#include <stdio.h>

int main() {
    int amount, days, total = 0;

    printf("Amount per day: ");
    scanf("%d", &amount);

    printf("Days: ");
    scanf("%d", &days);

    for (int i = 1; i <= days; i++) {
        total = total + amount;
         printf("Total saved = %d\n", total);
    }


    return 0;
}
