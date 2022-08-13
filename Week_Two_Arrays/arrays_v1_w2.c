#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];

    // Since we can set and access items in an array based on their position, and that
    // position can also be the value of some variable, we can actually use a for loop:
    for (int i = 0; i < 3; i ++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

// Now instead of setting each value, we use a for loop and use i as the index of each item in the array.