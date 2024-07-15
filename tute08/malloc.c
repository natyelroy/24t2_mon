// malloc exercise
// date: today
// by: zID

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

struct my_struct {
    int number;
    char letter;
    double another_number;
};

int main(void) {
    int *num = malloc(sizeof(int));

    // double *double_num = malloc(sizeof(double));

    // char *character = malloc(sizeof(char));

    *num = 9473895;
    printf("Num: %d\n", *num);

    int *num_array = malloc(sizeof(int) * SIZE);
    num_array[0] = 7;
    printf("Num at index 0: %d\n", num_array[0]);

    struct my_struct *new_struct = malloc(sizeof(struct my_struct));
    new_struct->letter = 'a';
    printf("Letter: %c\n", new_struct->letter);

    return 0;
}