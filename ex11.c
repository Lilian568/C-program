//
// Created by lily on 9/13/2024.
//
#include <stdio.h>
#include <string.h>

int replace_char(char *str, const char *repl) {
    int count = 0;

    if (strlen(repl) != 2) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == repl[0]) {
            str[i] = repl[1];
            count++;
        }
    }

    return count;
}

int main() {
    char str[100], repl[3];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // Remove newline

    printf("Enter two characters (replace first with second): ");
    fgets(repl, sizeof(repl), stdin);
    repl[strlen(repl) - 1] = '\0';  // Remove newline

    int replaced = replace_char(str, repl);

    if (replaced > 0) {
        printf("Modified string: %s\n", str);
        printf("Number of characters replaced: %d\n", replaced);
    } else {
        printf("String was not modified.\n");
    }

    return 0;
}