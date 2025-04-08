#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable(s) to be usded in the program
    int num1 = 5, num2 =7;
    int *ptrNum1; //integer pointer declaration
    int num3; //integer declaration
    
    //Make *ptrNum1 a pointer to num1
    ptrNum1 = &num1;
    num3 = *ptrNum1; // Assign the value 5 to num3 using a pointer (pointer indirection)
    num1 = 8; // Re-assign num1 a different values

    //Access and display the value in num1 using its pointer
    printf("\nThe value pointed to by ptrNum1 is: %d.", *ptrNum1);

    //Change the value of num1 using its pointer
    *ptrNum1 = 3;

    //Access and display the value in num1 using its pointer
    printf("\nThe modified value point to by ptrNum1 is: %d", *ptrNum1);

    //Access and display the value in num3
    printf("\nThe value in num3 is: %d", num3);

    //Access and display the address/memory location of num1
    printf("\nThe value 5 in num1 is stored in memory address : 0x%x", ptrNum1);

    return 0;
}
