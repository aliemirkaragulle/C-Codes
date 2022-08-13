#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Keep asking for the user input if the input given is below 1
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}