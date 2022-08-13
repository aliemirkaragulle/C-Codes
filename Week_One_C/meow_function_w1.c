// Header files, ending in .h, include prototypes like void meow(int n);.
// Then, library files will include the actual implementation of each of those functions.
#include <stdio.h>
#include <cs50.h>

// Declaring our function with a prototype
void meow(int n);

int main(void)
{
    // Call meow, giving it an input for the number of times we want to print "meow"
    meow(3);
}

// Our function takes an input n, which is an integer
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}