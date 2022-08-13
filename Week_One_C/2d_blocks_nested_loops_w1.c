#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    // For Each Row
    for (int i = 0; i < n; i++)
    {
        // For Each Column
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        // Move to the Next Row
        printf("\n");
    }
}