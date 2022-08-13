#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for(int i = 0; i < 7; i ++)
    {
        // We can't compare strings directly in C, since they're not a simple data type built into the language, but rather an array of many characters.
        // If you uncomment the code below, the program will raise an error.
        // if(names[i] == "Ron")

        // Luckily, the string library has function, strcmp, string compare, which compares strings for us.
        // strcmp returns;
        // a negative value if the first string comes before the second string,
        // 0 if the strings are the same, and,
        // a positive value if the first string comes after the second string.
        // We'll change our conditional to if(strcmp(names[i], "Ron") == 0), so we can check whether our two strings are actually equal.
        // And if we wrote if(strcmp(names[i], "Ron")), then any non-zero value, positive or negative, would be considered true,
        // which would be the opposite of what we want.
        if(strcmp(names[i], "Ron") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}