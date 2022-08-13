#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Dynamically Allocate an Array of Size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Assign Three Numbers To That Array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time Passes

    // Resize Old Array to Be Size 4
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Add Fourth Number To New Array
    tmp[3] = 4;

    // Remember New Array
    list = tmp;

    // Print New Array
    for(int i = 0; i < 4; i ++)
    {
        printf("i: %i\n", list[i]);
    }

    // Free New Array
    free(list);
    return 0;
}