// part1_arrays.c, odd_only
//
// Written by M17X
// on 17/06/2024
//
// This program adds 1 to any odd element in an array and after prints
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};

    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
    }

    int j = 0;
    while (j < SIZE) {
        printf("%d\n", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}