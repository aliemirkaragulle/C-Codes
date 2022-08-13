#include <cs50.h>
#include <stdio.h>
#include <string.h>

// It turns out in C that we can define our own data tyoe, or data structure.
// It would be a better design for our program to have some array with a data type person that includes both their name and phone number,
// so we can just say person people[];

// In C, we can create a struct with the following syntax:
// typedef struct
// {
//   string name;
//   string number;
// }
// person;

// typedef struct tells the compiler that we're defining our own data structure.
// And person at the end of the curly braces will be the name of this data structure.

// Inside our struct, we'll have two strings, name and number. We'll use strings for phone numbers since they might include punctutation,
// and other types of numbers, like zip codes, might have a leading 0 that would disappear if treated as a number.

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}