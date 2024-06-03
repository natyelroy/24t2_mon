// part6_roller_coaster
//
// This program was written by M17X
// on June
//
// This program is to see if you are tall
// enough to ride rollercoaster

#include <stdio.h>

#define MIN_HEIGHT 100
#define MIN_HEIGHT_ALONE 160

int main(void) {
    // scan height
    int height;
    printf("Scan height: ");
    scanf("%d", &height);

    // error checking
    if (height <= 0) {
        printf("Error: Invalid height!\n");
    } else if (height < MIN_HEIGHT) {
        printf("Error: Need to be taller!\n");
    } else if (height < MIN_HEIGHT_ALONE) {
        printf("Error: Need to ride with adult!\n");
    } else {
        printf("You can ride! :D\n");
    }

    return 0;
}