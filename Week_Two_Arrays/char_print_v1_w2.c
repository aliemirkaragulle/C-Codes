#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for(int i = 0, n = strlen(s); i < n; i ++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

// Now, at the start of our for loop, we initialize both i and n variable, and remember the length of our string in n.
// Then, we can check the values without having to call strlen to calculate the length of the string each time.
// And we did need to use a little more memory to store n, but this saves us some time with not having to check the length of the string each time.