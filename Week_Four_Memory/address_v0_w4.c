#include <stdio.h>
#include <cs50.h>

// We can print out each character in a string:
int main(void)
{
    // When we declare a string with double quotes, "", the compiler figures out where to put those characters in memory as an array.
    // string s = "HI!";

    // Let's simpligy our code to use char* and show just the printable characters:
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    // printf("%c\n", s[3]);

    printf("\n");

    // But we can go to addresses directly:
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));

    // *s goes to the address stored in s, and *(s + 1) goes to the location in memory with the next character, an address that is one byte higher.
    // s[1] is syntactic sugar, like an abstraction for *(s + 1), equivalent in function but more human-friendly to read and write.
}