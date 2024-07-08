// This program is a demonstration on pointers
// Date: today
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

int main(void) {
    // var
    int var = 2;
    printf("Value of var: %d\n", var);
    printf("Memory address of var: %p\n", &var);

    // var_ptr
    int *var_ptr;
    var_ptr = &var;
    printf("Value of var_ptr: %p\n", var_ptr);
    printf("Dereferenced var_ptr: %d\n", *var_ptr);

    //Let's change the value! What effect will it have?
    *var_ptr = 6;
    printf("Dereferenced var_ptr: %d\n", *var_ptr);
    printf("Value of var: %d\n", var);

    return 0;
}