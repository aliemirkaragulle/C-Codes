#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // We can build a linked list in code starting with our struct.
    // First, we will want to remember an empty list, so we can use the null pointer.
    node *list = NULL;

    // To add a node, we'll first need to allocate some memory.
    node *n = malloc(sizeof(node));

    // Recall that we can use sizeof to get the size of some data type, including structs.
    // We want to allocate enough memory for both a value and a pointer, and we'll point to that with n, a pointer to a node.

    if (n != NULL)
    {
        // Since n is a pointer, we need to go to the <node> there first, and then use the . operator to set a value.
        // (*n).number = 1;
        // We'll also want to set the pointer to the <next> node to null.
        // (*n).next = NULL;

        n -> number = 1;
        n -> next = NULL;
    }

    // Finally, our list needs to point to the node.
    list = n;

    // We want our list pointer to have the same address as n, since n is a temporary
    // variable and we want our list variable to refer to it as the first node in our list.
}

