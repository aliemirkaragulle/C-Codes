#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void print_tree(node *root);
void free_tree(node *root);

int main(void)
{
    node *tree = NULL;

    // Root Node
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n -> number = 2;
    n -> left = NULL;
    n -> right = NULL;

    tree = n;

    // Left Node
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n -> number = 1;
    n -> left = NULL;
    n -> right = NULL;

    tree -> left = n;

    // Right Node
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n -> number = 3;
    n -> left = NULL;
    n -> right = NULL;

    tree -> right = n;

    // Print Tree
    print_tree(tree);

    // Free Tree
    free_tree(tree);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root -> left);
    printf("%i\n", root -> number);
    print_tree(root -> right);
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root -> left);
    free(root);
    free_tree(root -> right);
}