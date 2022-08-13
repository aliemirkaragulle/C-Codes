#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

//Let's try to copy a string:

int main(void)
{
    //We get a string s, and copy the value of s into t.
    //Then, we capitalize the first letter in t.
    //But, when we run our program, we see that both s and t are now capitalized.
    char *s = get_string("s: ");
    char *t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

//Since we set s and t to the same value, or the same address, they're both pointing
//to the same character, and so we capitalized the same character in memory.

//Two different pointers but storing the same address