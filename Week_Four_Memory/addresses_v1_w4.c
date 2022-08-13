#include <stdio.h>
#include <cs50.h>

// We can declare an array of numbers, and access them with pointer arithmetic:
int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));

    // It turns out that we only need to add 1 to the address of numbers, instead of 4 (even though ints are 4 bytes in size),
    // since the compiler already knows that the type of each value in numbers is 4 bytes.
    // With +1, we're telling the compiler to move the next value inn the array, not the next byte.

    // And notice that the numbers is an array, but we can use it as a pointer with *numbers.
}