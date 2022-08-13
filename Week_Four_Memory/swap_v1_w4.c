#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

// By passing in the address of x and y, our swap function will be able to change the original values:
void swap(int *a, int *b)
{
    // The addresses of x and y are passed in from main to swap with &x and &y, amd we use the int *a syntax to declare that our swap function takes in pointers.
    // We save the first value to tmp by following the pointer a, and then set the second value to location pointed to by a by following the second pointer b.
    // Finally, we store the value of tmp to the location pointed to by b.
    int tmp = *a;
    *a = *b;
    *b = tmp;
}