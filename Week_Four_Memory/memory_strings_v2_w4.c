#include <stdio.h>
#include <cs50.h>

// Now, we'll print the address of the first character in s:
int main(void)
{
    string s = "HI!";
    // Address of the first character in s
    char *p = &s[0];
    printf("%p\n", s);
    printf("%p\n", p);
}

// With char *p = &s[0];, we store the address of the first character in s into a pointer called p.
// And now, when we print p and s as addresses, we see the same value.