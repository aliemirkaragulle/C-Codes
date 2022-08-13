#include <stdio.h>
#include <cs50.h>

// Our function, string_length, will take in a string as an argument, and return an int.
int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}