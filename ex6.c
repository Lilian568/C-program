#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_type();
int roll_dice(int dice_type);

int main() {
    int choice, dice_roll;
    srand(time(NULL));

    do {
        // Display the menu
        printf("\nDice Roller\n");
        printf("1. Roll D6\n");
        printf("2. Roll D10\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");


        choice = get_dice_type();

        if (choice == 1) {
            dice_roll = roll_dice(6);
            printf("You rolled a %d on the D6!\n", dice_roll);
        } else if (choice == 2) {
            dice_roll = roll_dice(10);
            printf("You rolled a %d on the D10!\n", dice_roll);
        } else if (choice != 3) {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    printf("Exiting Dice Roller...\n");
    return 0;
}

//get dice type from user with validation
int get_dice_type() {
    int choice;
    scanf("%d", &choice);

    // Validate input
    if (choice < 1 || choice > 3) {
        choice = -1; // Set to invalid choice if not 1, 2, or 3
    }
    return choice;
}

//roll the dice and return the result
int roll_dice(int dice_type) {
    return rand() % dice_type + 1; //generate random number in the desired range (1 to dice_type)
}