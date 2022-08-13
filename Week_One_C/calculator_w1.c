#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt User For x
    long x = get_int("x: ");

    //Prompt User For y
    long y = get_int("y: ");

    //Perform Addition
    printf("%li\n", x + y);
}