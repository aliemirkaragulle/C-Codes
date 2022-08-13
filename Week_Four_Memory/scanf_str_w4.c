#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // If we do no allocate any memory for s, scanf
    // will write our string to an unknow address in memory.
    char *s = malloc(4);
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}