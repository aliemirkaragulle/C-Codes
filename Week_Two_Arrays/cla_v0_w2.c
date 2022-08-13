#include <stdio.h>
#include <cs50.h>

// Programs of our own can also take in command-line arguments, or inputs given to our program in the command we use to run it.
// We can change what our main function to no longer take in void, or no arguments, and instead:

// argc and argv are two variables that our main function will now get automatically when our program is run from the command line.
// argc is the argument count, or number of arguments (words) typed in.
// argv[], argument vector (or argument list), is an array of the arguments (words) themselves, and there's no size specified
// since we don't know how big that will be ahead of time.

int main(int argc, string argv[])
{
    // The first arguments, argv[0], is the name of our program
    // (the first word typed, like ./hello or ./cla_v0).
    printf("Hello, %s\n", argv[0]);

    // We'll change our program to print the argument we want.
    // When we run our program without a second arguments, we see (null) printed.
    printf("Hello, %s\n", argv[1]);

    // We should make sure that we have the right number of arguments
    // before we try to print something that isn't there:
    if (argc == 2)
    // Now, we'll always print something valid, though we'll have
    // to update our program to support more than two arguments
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, World!\n");
    }
}