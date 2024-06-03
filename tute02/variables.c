// part1_variables
//
// This program was written by M17X
// on June
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int num;
    char character;
    double decimal_num;

    // 2. Initalise the variables
    num = 4;
    character = 'a';
    decimal_num = 3.4;

    // 3. Print the variables
    printf("Num: %d\n", num);
    printf("Character: %c\n", character);
    printf("Decimal num: %.1lf\n", decimal_num);

    // 4. Reassign the values of some of the variables
    num = 7;
    printf("Scan for character: ");
    scanf("%c", &character);

	// 5. Print the variables
    printf("Num: %d\n", num);
    printf("Character: %c\n", character);

	return 0;
}