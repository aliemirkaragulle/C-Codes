#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Strings are pointers with the address of the first character.

    // It turns out that string s = "HI!"; is the same as char * = "HI!"; and
    // We can use strings in C in the exact same way without the CS50 Linrary, by using char *.
    // string s = "HI!";
    char *s = "HI!";
    printf("%s\n", s);
}