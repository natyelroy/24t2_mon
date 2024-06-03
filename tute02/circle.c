// part2_circles
//
// This program was written by
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
	// Declare variable
	double radius;
	printf("Please put value of radius: ");

	// Initialise variable
	scanf("%lf", &radius);

	// Calculation
	double area = PI * (radius * radius);

	printf("Area of circle with radius %.2lf is %.2lf.\n", radius, area);

	return 0;
}