//Linear Search

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for(int i = 0; i < 7; i ++)
    {
        if(numbers[i] == 0)
        {
            printf("Found\n");
            // Indicates Success
            // (All Is Well, You Have Found What You Were Looking For)
            return 0;
        }
    }
    printf("Not Found\n");
    // Indicates an Error Code
    return 1;
}