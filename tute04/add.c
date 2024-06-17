// functions.c
//
// Written by Natalie
// on M2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int calculate_result(int val1, int val2);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    result = calculate_result(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// This function calculates the sum of 2 numbers
int calculate_result(int val1, int val2) {
    return (val1 + val2);
}