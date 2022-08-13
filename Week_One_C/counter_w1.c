#include <stdio.h>

int main(void)
{
    int counter = 0;

// Syntactic Sugar aka Shorthand Expressions for the Same Functionality
    counter = counter + 1;
//  counter += 1;
//  counter++;

    printf("%i\n", counter);
}