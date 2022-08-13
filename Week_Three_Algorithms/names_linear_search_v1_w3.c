#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Observe how strcmp behaves
int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for(int i = 0; i < 7; i ++)
    {
        if(strcmp(names[i], "George"))
        {
            printf("%i\n", strcmp(names[i], "George"));
        }
        else
        {
            printf("%i\n", strcmp(names[i], "George"));
        }
    }
    return 0;
}