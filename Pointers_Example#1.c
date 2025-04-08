#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("\ni=%d, ary[i]=%2d, *(ary+i)=%2d", i, ary[i], *(ary + i));
        printf("&ary[i]= %X, ary+i=%X", &ary[i], ary+i); // %X gives unsigned hexadecimal
    }
    */

    char a, str[81], *ptr;
    printf("\nEnter a sentence:");
    gets(str);
    printf("\nEnter character to search for:");
    a = getche();
    ptr = strchr(str,a);
    /* return pointer to char*/
    printf("\nString starts at address: %u",str);
    printf("\nFirst occurrence of the character is at address: %u ",ptr);
    printf("\nPosition of first occurrence(starting from 0)is: %d", *ptr);

    
    return 0;
}