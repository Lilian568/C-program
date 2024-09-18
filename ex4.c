#include <stdio.h>

int read_integer(void) {
    int num;

    while (scanf("%d", &num) != 1) {
        printf("Invalid input. Enter an integer: ");
        // Clear the input buffer until newline
        while (getchar() != '\n');
    }

    return num;
}

int main() {
    int num, count = 0, sum = 0;

    printf("Enter positive numbers or negative to stop: ");

    while ((num = read_integer()) > 0) {
        count++;
        sum += num;

        printf("Enter positive numbers or negative to stop: ");
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("You entered %d positive numbers.\n", count);
        printf("The average is: %.3f\n", average);
    } else {
        printf("No positive numbers were entered.\n");
    }

    return 0;
}