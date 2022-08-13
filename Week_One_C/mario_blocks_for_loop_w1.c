#include <stdio.h>
#include <cs50.h>

// Let's try to print out some blocks to the screen, like those from the video game Super Mario Bros.
// We'll start with printing four question marks, simulating blocks.

//int main(void)
//{
    //printf("????\n");
//}

// With a for loop, we can print any number of question marks with better design.
int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}