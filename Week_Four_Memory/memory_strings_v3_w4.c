#include <stdio.h>

// We can see the address of each character in s:
int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

// Again, the address of the first character, &s[0], is the same as the value of s.
// And each following character has an address that is one byte higher.