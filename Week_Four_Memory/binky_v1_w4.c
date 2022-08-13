#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;

    x = malloc(2 * sizeof(int));

    x[0] = 42;
    x[1] = 32;

    printf("%p\n", &x);
    printf("%i\n", *x);
    printf("%i\n", x[1]);
}