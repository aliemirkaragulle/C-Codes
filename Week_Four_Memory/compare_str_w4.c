#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool compare_str(string s, string t);

// When we try to compare two strings, we see that the same inputs are causing our program to print "Different":
// Even when our inputs are the same, we see "Different" printed.

// Each "string" is a pointer, char *, to a different location in memory, where the first character of each string is stored.
// So even if the characters in the string are the same, this will always print "Different".

// And get_string, this whole time, has been returning just a char *, or a pointer to the first character of a string from the user.
// Since we called get_string twice, we got two different pointers back.
int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    printf("\n");

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("\n");

    // We can fix our problem with:
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("\n");

    // We'll take a look at the values of s and t as pointers:
    // We see that the addresses of our two strings are indeed different.
    printf("Address of s: %p\n", s);
    printf("Address of t: %p\n", t);

    printf("\n");
}