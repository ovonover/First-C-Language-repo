/*write a c program that accepts a positive whole number from the user
and displays it on the screen */
#include <stdio.h>
#include <stdlib.h> //Pre-processor directive with the definition of the exit() function

//Main function begins program execution
int main()
{
    //Variable(s) to be used in the program
    int dbStatus = 0; // simulate database connection failure

    // Check the database connection status
    if(dbStatus == 0)
    {
        printf("Sorry, a critical error occurred.The connection to the database failed"
           "\nExiting application");
           exit(EXIT_FAILURE); //Exit/terminate the program o database connection failure
    }
    printf("Database connection successful.product details displayed below\n");

    return 0;

}