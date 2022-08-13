#include <stdio.h>
#include <cs50.h>

// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
// }

 // We'll divide by not 3, but 3.0 so the results is treated as a float.
// The design of our program isn't ideal, since we have just three variables, and we'd have to define more and more variables.
// While our program is running, the three int variables are stored in memory.
// Each int takes up four boxes, representing four bytes, and each byte in turn is made up of eight bits, 0s and 1s.

// It turns out we can refer to multiple variables with one name with another type called an array.
// With an array, we can store values of the same type, back-to-back, or contiguously.
// For example, in our program above, we can use int scores[3]; to declare an array of three integers instead.
// The square brackets, [3], indicates how many values we want to store, and int indicates the type of each value.
// We also name our array scores to indicate that it stores multiple scores.
// And we can assign and use variables in an array with scores[0] = 72. With the brackets, we're indexing into, or ggoing to, the "0th" position in the array.
// Arrays are zero-indexed, meaning that the first value has index 0, and the second value has index 1, and so on.

// An array is another type of data, that allows you to store multiple values of the same type back-to-back, contiguously.

// Let's update our program to use an array:
int main(void)
{
    // Declaring an array of size three, and that array is going to
    // store three integers because the type of the array is an int
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}