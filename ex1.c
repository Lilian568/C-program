#include <stdio.h>

int main() {
    float busPrice, taxiPrice, money, choice;

    printf("Enter price of bus ticket: ");
    scanf("%f", &busPrice);

    printf("Enter price of taxi: ");
    scanf("%f", &taxiPrice);

    printf("How much money you have: ");
    scanf("%f", &money);

    while (1) {
        if (money < busPrice && money < taxiPrice) {
            printf("You need to walk. Bye\n");
            break;
        }

        printf("Do you want to take\n");
        printf("1) bus (%.2f euros)\n", busPrice);
        printf("2) taxi (%.2f euros)\n", taxiPrice);
        printf("Enter your selection: ");
        scanf("%f", &choice);

        if (choice == 1) {
            if (money >= busPrice) {
                money -= busPrice;
                printf("You chose bus.\n");
                printf("You have %.2f euros left.\n", money);
            } else {
                printf("You don't have enough money for bus.\n");
            }
        } else if (choice == 2) {
            if (money >= taxiPrice) {
                money -= taxiPrice;
                printf("You chose taxi.\n");
                printf("You have %.2f euros left.\n", money);
            } else {
                printf("You don't have enough money for taxi.\n");
            }
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    }

    return 0;
}






