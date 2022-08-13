#include <stdio.h>

// A pointer is a variable that stores an address in memory, where some other variable might be stored.

int main(void)
{
    int n = 50;
    // The & operator can be used to get the address of some variable, as with &n.
    // And the * operator declares a variable as a pointer, as with int *p, indicating that we have a variable called p that points to an int.
    // So, to store the address of a variable n into a pointer p, we would write:
    int *p = &n;

    // %p is the format code to print an address with printf. And we only need to use the name of the variable, p, after we've declared it.
    // In our instance of VS Code, we see an address with a large value like 0x7ffc17268b0c. The value of the address in itself is not significant,
    // since it's just some location in memory that the variable is stored in; instead, the important idea is that we can use this address later.
    printf("Value Of the Pointer: %p\n",p);

    // The * operator is also the dereference operator, which goes to an address to get the value stored there.
    printf("Value At the Address: %i\n", *p);

    // Now, we see the value of the pointer itself (an address), and then the value at the address with *p, which is 50.
    // Since we declared p to be an int *, the compiler knows that *p is an int, so the right number of bytes are read.
}