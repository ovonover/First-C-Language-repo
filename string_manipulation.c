/* C program demonstrating strings and string manipulation functions. */

// Pre-processor directive(s).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program.
    char myString[20];


    // Prompt the user for a string of their choice.
    puts("Please enter a message below: ");
    // Read in a string from the user.
    gets(myString);

    // Display what the user entered.
    printf("\nYou gave us:\n \"%s\"", myString);


    char str1[] = "Good";
    char str2[] = "Afternoon";
    char *str3 = strcat(str1, " "); // Good  
    str3 = strcat(str3, str2); // Good Afternoon
    strcpy(str1, "Hello");
    strcpy(str2, "World");


    // Display string3
    printf("\nString 3 holds the value:\n\"%s\".", str3);

    // Compare  string1 and string2 using the strcmp() function.
    if(strcmp(str1, str2) == 0)
    {
        printf("\n%s is the same as %s.", str1, str2);
    }
    else if(strcmp(str1, str2) > 0)
    {
        printf("\n%s is lexigraphically less than %s.", str1, str2);
    }
    else 
    {
        printf("\n%s is lexigraphically greater than %s.", str1, str2);
    }

    // Display a pointer to the first l in the string "Hello" using strchr().
    printf("\nThe first \'l\' in \"Hello\" is stored in location %p", strchr(str1, 'l'));

    // Display the length of the string "Good Afternoon" using strlen().
    printf("\nThe lenght of \"%s\" is %d characters.", str3, strlen(str3));


    return 0;
} // End of fucntion main()

