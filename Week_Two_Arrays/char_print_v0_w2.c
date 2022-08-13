#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Now that we can use strlen, we can try to print each character of our string with a loop:
int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for(int i = 0; i < strlen(s); i ++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

// We can print each character of s with s[i], and we can use a for loop since we know the length of the string, so we know when to stop.
// We can improve the design of this program. Our loop was a little inefficient, since we check the length of the string, after each string
// is printed, in our condition. But since the length of the string doesn't change, we can check the length of the string once (See char_print_v1.c).