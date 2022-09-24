#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CutSpaces(char str[]);

int main(void)
{
    char str[18] = "    Hello World  ";
    CutSpaces(str);

    return 0;
}

void CutSpaces(char str[])
{
    char cutted_str[42] = {};

    // Loop Through the Chars of the str 
    for(int i, j = 0; str[i] != '\0' ; i++)
    {
        // If It is a Letter
        if (str[i] != ' ')
        {
            // Include the Letter
            cutted_str[j] = str[i];
            j++;
        }
        // If There is a Space Between the Words
        else if ((str[i] == ' ') && (str[i + 1] != ' '))
        {
            // Include that Space
            cutted_str[j] = str[i];
            j++;
        }
    }

     printf("%s", cutted_str);
}