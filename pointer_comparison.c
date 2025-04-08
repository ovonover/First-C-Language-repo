#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable(s) to be usded in the program
    float num1 = 10.5, num2 = 20.7;

    //Declare float pointers and assign them the addresses of num1 & num2
    float *ptr_num1 = &num1, *ptr_num2 = &num2;

    //Display the value of num1 & num2 and their storage locations/addresses
    printf("\nValue of num1 is %.lf and its stored in address 0X%p.", num1, ptr_num1);
    printf("\nValue of num2 is %.lf and its stored in address 0X%p.", num2, ptr_num2);

    if(ptr_num1 > ptr_num2)
    {
        printf("\nptr_num1 is stored after ptr_num2");
    }
    else
    {
        printf("\nptr_num1 is not stored after ptr_num2");
    }

    // Check if num1 is stored after num2
    printf(ptr_num1 > ptr_num2 ? "\nptr_num1 is stored after ptr_num2" : "\nptr_num1 is not stored after ptr_num2");
    
    // Check if num1 is stored before num2
    printf(ptr_num1 < ptr_num2 ? "\nptr_num1 is stored before ptr_num2" : "\nptr_num1 is not stored before ptr_num2");

    //Compare the pointers for equality
    if(ptr_num1 == ptr_num2)
    {
        printf("\nThe pointers are equal. ");
    }
    else
    {
        printf("\nThe pointers are not equal.");
    }

    //Compare the values pointed to for equality
    if(*(ptr_num1) == *(ptr_num2))
    {
        printf("\nThe values are equal.");
    }
    else
    {
        printf("\nThe values are not equal.");
    }
    return 0;
}
