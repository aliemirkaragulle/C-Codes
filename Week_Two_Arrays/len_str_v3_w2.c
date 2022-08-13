#include <stdio.h>
#include <cs50.h>
#include <string.h>

// We can use a function that comes with C's string library, strlen, to get the length of the string:
int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}