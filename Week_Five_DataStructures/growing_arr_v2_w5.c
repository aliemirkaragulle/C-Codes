#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Then, we'll allocate more memory to add another value:

    // Time Passes

    // After we allocate enoughg memory for four integers, we need a temporary pointer, tmp,
    // since we need to copy values from our original list into the new chunk of memory.
    // (If malloc fails, we'll free the original memory and exit our program with return 1.)
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // We'll use a for loop to copy the values from list, and set the final value in tmp.
    for (int i = 0; i < 3; i ++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    // Now, we free our original chunk of memory, and then set list to point to the new list:
    free(list);
    list = tmp;

    // We'll print out the list of values to demonstrate, and free it at the end of our program when we're done with it.
    // (Since list now points to the same chunk of memory as tmp, we can just call free(list).)
    for (int i = 0; i < 4; i ++)
    {
        printf("Number: %i\n", list[i]);
    }

    free(list);
    return 0;

    // Finally, we can runn valgring ./growing_arr_v2, and see that there are no memory-related errors.
}