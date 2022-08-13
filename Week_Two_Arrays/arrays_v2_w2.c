#include <stdio.h>
#include <cs50.h>

// Previously, we have repeated the value 3 (magic number), representing the length of our array, in two different places.
// So we can ask the user and use a variable, n, for the number of scores:
int main(void)
{
    int n = get_int("How Many Scores? ");
    int scores[n];

    for (int i = 0; i < n; i ++)
    {
        scores[i] = get_int("Score: ");
    }
}

// An array gives you one variable name, but multiple locations, or indices therein.