#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    while (true)
    {
        n = get_int("Width: ");
        if (n > 1)
        {
            break;
        }
    }
}