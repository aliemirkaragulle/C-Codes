#include <stdio.h>

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

// Now, if the user types in a string of length 3 or less, our program will work safely.
// But if the user types in a longer string, scanf might be trying to write
// past the end of our array into unknown memory, causing our program to crash.