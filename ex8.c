#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_numbers(const int *array, int count) {
    for (int i = 0; i < count; i++) {
        printf("%8d\n", array[i]);
    }
}

int main() {
    const int array_size = 15;
    int array[array_size];

    // Seed the random number generator
    srand(time(NULL));

    // Fill the array with random numbers
    for (int i = 0; i < array_size; i++) {
        array[i] = rand();
    }

    // Print the array contents
    print_numbers(array, array_size);

    return 0;
}