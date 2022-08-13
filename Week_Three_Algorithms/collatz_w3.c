#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n <= 0);

    int res = collatz(n);
    printf("Number of Steps: %i\n", res);
}

int collatz(int n)
{
    // Base Case
    if (n == 1)
        return 0;
        
    // Recursive Case
    else if (n % 2 == 0)
        return 1 + collatz(n / 2);
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}