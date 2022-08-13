#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!";

    // It turns out that string are actually just arrays of characters,
    // and defined not in C but by the CS50 library.
    printf("%s\n", s);

    // Since our string is called s, which is just an array,
    // each character can be accessed with s[0], s[1], and so on:
    printf("%c%c%c\n", s[0], s[1], s[2]);
    printf("%i %i %i\n", s[0], s[1], s[2]);

    // printf("%c\n", s[3]);
    printf("%i\n", s[3]);
}

// In C, strings end with a special character, '\0', or a byte with all eight bits set to 0, so our programs have a way of knowing where the string ends.
// This character is called the null character, or NUL. So, we actually need four bytes to store our string with three characters.
// We can even print the last byte in our string to see that its value is indeed 0. (See Line 17 & 18)


// Let's try taking a look at multiple strings:

// int main(void)
// {
//     string s = "HI!";
//     string t = "BYE!";

//     printf("%s\n", s);
//     printf("%s\n", t);
// }

// s takes up 4 bytes
// t takes up 5 bytes