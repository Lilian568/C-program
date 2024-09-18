#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_first(const unsigned int *array, unsigned int what) {
    int index = 0;
    while (array[index] != 0 && array[index] != what) {
        index++;
    }

    return (array[index] == what) ? index : -1;
}

int main() {
    unsigned int array[20];
    srand(time(NULL));  // Seed random number generator

    // Fill the array with random numbers (1-20) and a zero at the end
    for (int i = 0; i < 19; i++) {
        array[i] = rand() % 20 + 1;  // Generate random number in range 1-20
    }
    array[19] = 0;  // Mark the end with a zero

    printf("Array:\n");
    for (int i = 0; i < 20; i++) {
        printf("%u\n", array[i]);
    }

    int num_to_find;
    do {
        printf("\nEnter a number to search for (or 0 to stop): ");
        scanf("%u", &num_to_find);

        if (num_to_find != 0) {
            int index = find_first(array, num_to_find);
            if (index != -1) {
                printf("Number %u found at index %d\n", num_to_find, index);
            } else {
                printf("Number %u not found\n", num_to_find);
            }
        }
    } while (num_to_find != 0);

    printf("Search terminated.\n");
    return 0;
}