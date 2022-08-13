// If we wanted to have an array with memory from the heap with malloc, our program might look like this:

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // First, we'll allocate enough memory for three integers and point to the first one with int *list.
    // (If malloc fails, our pointer will be null, and we'll exit our program with return 1.)
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Since arrays in C are equivalent to pointers, we can use the same notation to set the values in our list with list[0], list[1], and list[2].
    // The compiler will perform the correct pointer arithmetic to set values at the right addresses.
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i ++)
    {
        printf("Number: %i\n", list[i]);
    }
}