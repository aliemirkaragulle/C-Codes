#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt User for x
    float x = get_float("x: ");

    // Prompt User for y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;

    // printf("%f\n", z);

    // With format codes like %.2f, we can specify the number of decimal places displayed
    printf("%.50f\n", z);

    // If we try to divide 2 by 3, or 1 by 10, the resulting values will not seem to be what we expect.
    // It turns out that this is called floating-point imprecision.
    // It is the inabilitiy for computers to represent all possible real numbers w/ a finite number of bits, like 32-bits for a float.
    // So, our computer has to store the closest value it can, leading to imprecision.

    // In other languages, there are other ways to represent decimal values w/ more and more bits,
    // though there is still a fundamental limit to the degree of accuracy.
}