#include <stdio.h>
#include <stdbool.h>

bool read_positive(int *value) {
    int temp;

    printf("Enter a positive number: ");
    if (scanf("%d", &temp) != 1 || temp <= 0) {
        printf("Incorrect input\n");
        return false;
    }

    *value = temp;
    return true;
}

int main() {
    int guess;
    int tries = 0;
    int money = 100;

    printf("Guess how much money I have!\n");

    while (tries < 3) {
        if (!read_positive(&guess)) {
            tries++;
            continue;
        }

        if (guess == money) {
            printf("You got it right!\n");
            break;
        } else {
            printf("You didn't get it right. I have %d euros.\n", money * 2 + 20);
            money = money * 2 + 20;
            tries++;
        }
    }

    if (tries == 3) {
        printf("I give up! See you later!\n");
    }

    return 0;
}