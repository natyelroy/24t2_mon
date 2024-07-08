// This program is a demonstration on command lines
// Date: today
// By Natalie Leroy (zXXXXXXX)

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Sum of Command Line Arguments
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("Sum: %d\n", sum);

    // Count Characters in Command Line Arguments
    int count_characters = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            count_characters++;
        }
    }

    printf("Total characters: %d\n", count_characters);

    // Reverse Command Line Arguments
    for (int i = argc - 1; i > 0; i--) {
        printf("\n%s ", argv[i]);
    }
    printf("\n");

    // Check for Command Line Arguments
    if (argc == 1) {
        printf("No command-line arguments!\n");
    } else {
        printf("Number of command line arguments: %d\n", argc - 1);
    }
    return 0;
}
