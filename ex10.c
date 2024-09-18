//
// Created by lily on 9/13/2024.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    while (1) {
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        // Remove the newline character if present
        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }

        printf("Length of the string: %d\n", strlen(str));

        if (strcmp(str, "stop") == 0) {
            break;
        }
    }

    printf("Program terminated.\n");
    return 0;
}