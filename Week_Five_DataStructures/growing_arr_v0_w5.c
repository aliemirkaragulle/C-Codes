// A program that uses an array of three numbers might look like this:

#include <stdio.h>

int main(void)
{
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i ++)
    {
        printf("Number: %i\n", list[i]);
    }
}