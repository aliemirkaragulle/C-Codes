#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Enter String: ");
    int n = 0;
    int i = 0;

    while (true)
    {
        if (s[i] != '\0')
        {
            n++;
        }
        else if (s[i] == '\0')
        {
            break;
        }
        i++;
    }

    printf("Length Of The String: %i\n", n);
}