/* C program demonstrating defining and working with structures. */

// Pre-processor directive(s).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the category/cat structure data type.
struct cat
{
    char bk_name[40];
    char author[20];
    int edn;
    float price;
}; //End of category/cat structure definition.

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program.
    struct cat book1, book2;

    // Hard-code the values for book1.
    strcpy(book1.bk_name, "C How to Program");
    strcpy(book1.author, "Deitel & Deitel");
    book1.edn = 7;
    book1.price = 2500.5;

    // Display the amount of memory required to store book1.
    printf("\nThe amount of RAM required to stoe book1 is %d bytes.", sizeof(book1));

    // Prompt the user for the details of the 2nd book/book2.
    printf("\nPlease enter the name/title of book2:\n");
    gets(book2.bk_name);
    printf("\nPlease enter the name of the author of %s:\n", book2.bk_name);
    gets(book2.author);
    printf("\nPlease enter the edition of %s:\n", book2.bk_name);
    scanf("%d", &book2.edn);
    printf("\nPlease enter the price of %s:\n", book2.bk_name);
    scanf("%f", &book2.price);

    // Display the details of the 2 books.
    printf("\nDetails of book1:");
    printf("\n-----------------------------------------------");
    printf("\nBook name: %s", book1.bk_name);
    printf("\nBook author: %s", book1.author);
    printf("\nBook edition: %d", book1.edn);
    printf("\nBook price: %.2f", book1.price);
    printf("\n-----------------------------------------------");
    printf("\n\n");
    printf("\nDetails of book2:");
    printf("\n-----------------------------------------------");
    printf("\nBook name: %s", book2.bk_name);
    printf("\nBook author: %s", book2.author);
    printf("\nBook edition: %d", book2.edn);
    printf("\nBook price: %.2f", book2.price);
    printf("\n-----------------------------------------------");
    return 0;
} // End of fucntion main()

