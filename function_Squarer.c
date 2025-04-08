/* C program that demonstrates the uses of Pointers in manipulating arrays. */
#include <stdio.h>

// Declare a function prototype (function declaration) for the squarer() function.
int squarer(int x);

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    int n = 1;
    for(; n <= 10; n++)
    {
        printf("\nSquare of %2d is %3d.", n, squarer(n));
    }
    return 0;

} // End of fucntion main()

// Function definition of the squarer() function
int squarer(int x)
{
    return x * x;
} // End of function squarer()