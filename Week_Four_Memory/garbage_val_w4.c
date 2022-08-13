#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // We declare an array, scores, but we didn't initialize it with any values.
    // The values in the array are garbage values, or whatever unknown values that were in memory,
    // from whatever program was running in our computer before.
    int scores[3];
    for(int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}

// If we aren't careful with how our programs access memory, users might end up seeing
// data from previous programs, like passowrds. And if we try to go to an address that's a
// garbage value, our program is likely to crash from a segmentation fault.