#include <stdio.h>

// We might have three digits we want to print:
int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    // We can use %c to print out each character.
    printf("%c%c%c\n", c1,c2,c3);

    // Let's see what happens if we change our program co print c as an integer:
    // It turns out that printf can print chars as integers, since each
    // character is really stored as an ASCII value with zeroes and ones.
    printf("%i% i %i\n", c1,c2,c3);

    printf("%i% i %i\n", c1-1,c2-1,c3-1);

    // We can explicitly convert chars to ints as well with:
    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
}

