#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    // It turns out that there's imprecision storing the float we get from the user (4.20 might be stored as 4.19999...),
    // and so when we multiply it and display it as an integer, we see 419.
    // We can try to solve this by rounding.
    // By rounding, we can avoid floating-point imprecision.
    float amount = get_float("Dollar Amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}

