#include <stdio.h>
#include <cs50.h>

void draw_iteration(int n);
void draw_recursion(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw_recursion(height);
}

// Iterative Solution
void draw_iteration(int n)
{
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < i + 1; j ++)
        {
            printf("#");
        }
         printf("\n");
    }
}

// Notice that a pyramid of height 4 is actually a pyramid of height 3 with an extra row of 4 blocks added on.
// And a pyramid of height 3 is a pyramid of height 2 with an extra row of 3 blocks.
// A pyramid of height 2 is a pyramid of height 1 with an extra row of 2 blocks.
// And finally, a pyramid of height 1 is a pyramid of height 0 (no blocks) with a row of 1 block added.

// Since a pyramid is a recursive structure, we can write a recursive function to draw a pyramid,
// a function that calls itself to draw a smaller pyramid before adding another row:

// Recursive Solution
void draw_recursion(int n)
{
    // Base Case
    if(n <= 0)
    {
        return;
    }

    draw_recursion(n-1);

    for(int i = 0; i < n; i ++)
    {
        printf("#");
    }
    printf("\n");
}

// We can rewrite our draw_recursion function to use itself.
// If n is 0 (or negative somehow) we'll stop without printing anything.
// And we need to make sure we stop for some base case, so our function doesn't call itself over and over forever.
// Otherwise, we'll call draw_recursion again, to print a pyramid of size n-1 first.
// Then, we'll print the row of blocks we need for our pyramid, of size n.

// We can change our conditional to if(n == 0), and type in a negative number to see what happens:
// Segmentation fault (core dumped)
// A segmentation fault means that we've touched memory in our computer that we shouldn't have,
// and this happened since our function has called itself over and over so many times and ended up using too much memory.