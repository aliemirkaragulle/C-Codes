#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, n = strlen(s); i < n; i ++)
    {
        if(islower(s[i]))
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

// Based on the manual pages, islower will return a non-zero value if c, the character passed in, is lowercase.
// And a non-zero value is treated as true in Boolean expressions (0 is equivalent to false).

// We can simplify even further, and just pass in each character to another function toupper, since it capitalizes lowercase characters for us,
// and returns non-lowercase characters as they originally were (See capitalize_v2_w2.c).