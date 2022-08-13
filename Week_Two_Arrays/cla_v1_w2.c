#include <cs50.h>
#include <stdio.h>

// It turns out that our main function also returns an integer value called an exit status.
// By default, our main function returns 0 to indicate nothing went wrong, but we can write a program to return a different value:
int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}

// A non-zero exit status indicates some error to the system that runs our program.
// Once we run return 1; our program will exit early with an exit status of 1.
// We might have seen error codes in the past when programs we used encountered errors as well.

// We'll write return 0 explicitly at the end of our program here,
// even though we don't technically need to since C will automatically return 0 for us.