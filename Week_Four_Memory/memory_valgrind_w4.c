#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allocate memory for some integers.
    // We'll use malloc to get enough memory for 3 times the size of an int,
    // which we can find out with sizeof.
    int *x = malloc(3 * sizeof(int));

    // We've deliberately made a mistake where we forgot arraays are 0-indexed, and started at x[1] instead.
    // Then, with x[3], we're trying to access memory beyond the bounds of what we have access to.
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;

    // We also don't free the memory we've allocated.
    // free(x);
}

// valgrind is a command-line tool that we can use to run our program and see if it has any memory-related issues.
// We'll run valgrind ./memory_valgrind after compiling, and we'll see a lot of outputs.