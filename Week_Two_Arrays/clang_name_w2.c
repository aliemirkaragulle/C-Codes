#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
}


// clang -o clang_name clang_name.c
// If you run the above code you will get an error.
// It looks like clang can't find get_string, but we did include cs50.h.
// It turns out that we also tell our compiler to actually link in the cs50 machince code with the functions described by cs50.h.
// We'll have to add another argument with it:
// clang -o clang_name clang_name.c -lcs50