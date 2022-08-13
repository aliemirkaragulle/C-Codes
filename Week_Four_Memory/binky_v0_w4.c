#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare Two Pointers
    int *x;
    int *y;

    // Allocate memory for x
    x = malloc(sizeof(int));

    // Dereference

    // Valid
    *x = 42;

    // Invalid (No Pointee)
    // *y = 13;

    // The pointers x and y points to the same allocated memory
    y = x;

    // Value of x and y are now same and 13
    *y = 13;
}