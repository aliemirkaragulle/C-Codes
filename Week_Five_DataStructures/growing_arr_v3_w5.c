// We can add comments and use another library function, realloc:

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes

    // Resize old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Add fourth number to new array
    tmp[3] = 4;

    // Remember new array
    list = tmp;

    // Print new array
    for (int i = 0; i < 4; i ++)
    {
        printf("Number: %i\n", list[i]);
    }

    // Free new array
    free(list);
    return 1;

    // Now, instead of allocating new memory and copying the old array to the new array, we can write int *tmp = realloc(list, 4 * sizeof(int));.
    // We pass in the pointer to the original chunk of memory, and how much memory we would like to use.
    // realloc will grow the original chunk for us if there's enough free memory after it, by allocating it to the same chunk.
    // Otherwise, it will move the chunk of memory for us to a new area, and free the original chunk of memory for us as well.
}