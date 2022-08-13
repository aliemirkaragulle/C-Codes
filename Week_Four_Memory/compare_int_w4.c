#include <stdio.h>
#include <cs50.h>

// Let's try to compare two integers from the user:
int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

// We compile and run our program, and it works as we'd expect, with the same values of the two integers giving us "Same" and different values "Different".