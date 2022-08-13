#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, n = strlen(s); i < n; i ++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
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

// First, we get a string s from the user.
// Then, for each character in the string, if it's lowercase (which means it has a value between that of a and z, inclusive), we convert it to uppercase.
// Otherwise, we just print it.

// We can convert a lowercase letter to its uppercase equivalent by subtracting the difference between their ASCII values, which is 32 between a and A,
// and b and B, and so on. We can search in the manual pages for "lowercase", and it looks like there's another library, ctype.h, that we can use.
// (See capitalize_v1_w2.c)