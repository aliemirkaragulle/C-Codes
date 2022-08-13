#include <stdio.h>
#include <cs50.h>

// Function Definition
// First void is the return value's type (void here since there is no return value of our function).
// meow is the name of our function.
// Second void is the arguments (inputs) that the function takes (void here since our function takes no argument).
void meow(void)
// The lines of code in the curly braces will be the code that runs every time our function is called.
{
    printf("Meow\n");
}

int main(void)
{
    // Function Call
    meow();
}