#include <stdio.h>
#include <cs50.h>

// Arrays elements are set to indices.
int main(void)
{
    int n = get_int("Length of the array: ");
    int array[n];

    printf("Array: ");
    for(int i = 0; i < n; i++)
    {
        array[i] = i;
        printf("%i", array[i]);
    }
    printf("\n");
}