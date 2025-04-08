#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable(s) to be usded in the program
    int arr[] = {5, 10, 15, 20, 25}, n;
    int *ptrArr = arr; // Declare a pointer to the first element in the integer array

    // Display the original array element normally and using pointers
    for(n = 0; n < sizeof(arr) / sizeof(arr[0]); n++)
    {
        printf("\nNormal access: %d \tPointer Access: %d", arr[n], *(ptrArr + n));
    }

    // Pointer arithmetics operations
    for(n = 0; n < sizeof(arr) / sizeof(arr[0]); n++)
    {
        printf("\nAddress of element %d: 0X%p \tValue of element %d: %d.", n+1, ptrArr + n, n + 1, *(ptrArr + n));
    }

    //Subtracting pointers
    printf("\n\nSubtracting pointers");
    printf("\nDifference between 5th element(ptrArr + 4) and 2nd element(ptrArr + 1)",
            "is %ld elements.", (ptrArr + 4) - (ptrArr + 1));


    // Increment and decrement the values within the array using pointers
    printf("\nOriginal value of first element: %d", *ptrArr);
    (*ptrArr)++; // Increment the value of the first element by one: i.e. 5 + 1 -> 6
    printf("\nIncrementing the value of the first element by 1 results in %d.", *ptrArr);
    (*(ptrArr + 1))--; //Decrement the value of the 2nd element by 1: i.e. 10 - 1 -> 9
    printf("\nDerementing the value of the 2nd element by 1 results in %d.\n", *(ptrArr + 1));

    return 0;
}
