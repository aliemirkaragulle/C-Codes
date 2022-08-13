#include <stdio.h>
#include <cs50.h>

// We can experiment and see the address of characters:
int main(void)
{

    string s = "HI!";
    char c = s[0];
    char *p = &c;
    printf("%p\n", s);
    printf("%p\n", p);
}

// We store the first character of s into c, and print out its address with p.
// We also print out s as an address with %p.
// We see that the values are different since we made a copy of the first character with char c = s[0];