#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // We'll allocate memory for the first node, set its values, and point list to the new node:

    // List of Size 0
    node *list = NULL;

    // Add a Number to List
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    // (*n).number = 1;
    n -> number = 1;
    // (*n).next = NULL;
    n -> next = NULL;

    // Update List to Point to New Node
    list = n;

    // To add a new node, we'll reuse n as a pointer, but allocate more memory for the second node:

    // Add a Number to List
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list);
        return 1;
    }
    n -> number = 2;
    n -> next = NULL;
    list -> next = n;
    // If we somehow couldn't allocate more memory, we'll free the node in our list and exit.
    // Otherwise, we'll set the values for n, and set the first node, list -> next, to point to it.

    // Now we can add a third node:

    // Add a Number to List
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list -> next);
        free(list);
        return 1;
    }
    n -> number = 3;
    n -> next = NULL;
    list -> next -> next = n;
    // We're starting to see some repetition, and we'll eventually want to use loops, but for now we'll manually demonstrate everything.
    // Notice that we need to free list -> next, the second node, and then list, the first node, since we need to follow it to the second node first.
    // Then, we'll follow the next pointer in the first node, and set the next pointer in that node to point to the new node n.

    // Finally, we can print our list, and free it wiht a loop:

    // Print Numbers
    for(node *tmp = list; tmp != NULL; tmp = tmp -> next)
    {
        printf("%i\n", tmp -> number);
    }

    // Free List
    while (list != NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
    // We use a temporary pointer, tmp, to follow each of our nodes.
    // We'll imitialize it to list with node *tmp = list, which lets us ğpint to the first node in our list.
    // Then, within our loop, we can print tmp -> number.
    // After each iteration of the loop, we'll update tmp to tmp -> next, which is the pointer to the next node.
    // Finally, the loop will continue while tmp != NULL.
    // In other words, our loop will end when tmp is null, meaning that the current node isn't pointing to another one.
    // Since tmp is a pointer that we didn't allocate additional memory for, we don't need to free it.
    // Instead, we'll use a loop to free our list, by using another tmp pointer to remember the next node before we free the current node.
    // Then, free(list) will free the memory for the node that list points to. After we do that, we can set list to tmp, the next node.
    // Our loop will repeat until list is null, when no more nodes are left.
    // Recall that we allocated the memory for an array all at once, so we can free it all at once as well.
    // With a linked list, we're responsible for freeing the memory for each node separately, since we allocated it separately as well.
    return 0;
}