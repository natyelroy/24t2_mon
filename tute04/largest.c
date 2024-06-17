// copy & largest
//
// Written by M17X
// on 17/06/2024
//
// More practice with arrays!

#include <stdio.h>

#define FIRST_SIZE 3
#define SECOND_SIZE 10

int main(void) {
    /*Copy Array
Create a while loop that prints out all the elements of the second array.*/

    double first_array[FIRST_SIZE] = {1.2, 3.4, 5.4};
    double second_array[SECOND_SIZE] = {0.0};

    int i = 0;
    while (i < FIRST_SIZE) {
        second_array[i] = first_array[i];
        i++;
    }

    int j = 0;
    while (j < SECOND_SIZE) {
        printf("%.2lf\n", second_array[j]);
        j++;
    }

    return 0;
}