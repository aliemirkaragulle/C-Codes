#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    for(int i = 0; i < 2; i ++)
    {
        if(strcmp(names[i], "David") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// We have two arrays, names and numbers, and we'll make sure that each person's phone number has the same index as their name in each array.
// We'll search our names array for someone's name, and then return the,r corresponding phone number at the same index.
// This program is correct, but not well-designed since we'll have to maintain both arrays carefully to make sure that the names and numbers line up.
// See phonebook_v1_w3.c