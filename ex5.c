#include <stdio.h>

int read_range(int low, int high) {
    int num;

    do {
        printf("Enter a number between %d and %d: ", low, high);
        scanf("%d", &num);

        if (num < low || num > high) {
            printf("Invalid input. Enter a number within the given range.\n");
        }
    } while (num < low || num > high);

    return num;
}

int main() {
    int user_roll, computer_roll;

    printf("Let's play!\n");

    for (int round = 1; round <= 3; round++) {
        printf("Roll a dice and enter your result.\n");
        user_roll = read_range(1, 6);

        if (user_roll == 6) {
            computer_roll = 6;
            printf("I got 6. It is a tie!\n");
        } else {
            computer_roll = user_roll + 1;
            printf("I got %d. I win!\n", computer_roll);
        }
    }

    printf("Better luck next time. Bye!\n");

    return 0;
}