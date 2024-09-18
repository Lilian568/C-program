//
// Created by lily on 9/13/2024.
//
#include <stdio.h>
#include <string.h>

int count_words(const char *str, const char *word) {
    int count = 0;
    char *ptr = str;

    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += strlen(word);  // Advance past the found occurrence
    }

    return count;
}

int main() {
    char str[100], word[100];

    while (1) {
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';  // Remove newline

        printf("Enter a word to count: ");
        fgets(word, sizeof(word), stdin);
        word[strlen(word) - 1] = '\0';  // Remove newline

        int count = count_words(str, word);
        printf("The word \"%s\" occurs %d times in the string.\n", word, count);

        if (strcmp(word, "stop") == 0) {
            break;
        }
    }

    printf("Program terminated.\n");
    return 0;
}