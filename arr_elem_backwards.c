#include <stdio.h>

int main(void)
{
    // Initial Array
    int v[9] = {1, 2, -1, 3, -1, 55, -1, 3, 0};
    printf("First Array: [");
    for(int i = 0; i < 9; i ++)
    {
        if(i != 8)
        {
            printf("%i,", v[i]);
        }
        if(i == 8)
        {
            printf("%i]", v[i]);
        }
    }
    printf("\n");


    // Seconday Array
    int w[] = {};

    // Number of -1's
    int c = 0;
    for(int i = 0, j = 0; i < 9; i ++)
    {
        if(v[i] == -1)
        {
            c++;
        }

        if(v[i] != -1)
        {
            //printf("w: %i\n", w[i]);
            //printf("v: %i\n", v[i]);
            w[j] = v[i];
            j ++;
        }
    }
    //printf("Number of -1: %i\n", c);

    for(int i = 9 - c; i < 9; i ++)
    {
        w[i] = -1;
    }

    // Print the Secondary Array
    printf("Final Array: [");
    for(int i = 0; i < 9; i ++)
    {
        if(i != 8)
        {
            printf("%i,", w[i]);
        }
        if(i == 8)
        {
            printf("%i]", w[i]);
        }
    }
    printf("\n");
}