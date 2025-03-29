/* Using 2 nested loops, write a C program called 'upside_down_isoceles.c' that displays the following pattern
 
* * * * * * *
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
Due on Saturday 22nd March 15:00 hrs. EAT
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*  PSEUDOCODE FOR THE PROGRAM:

    BEGIN
        ACCEPT A SYMBOL FROM USER;

    
    END
    
    
    */
    // char symbol;
    // int n = 7; // number of rows

    // printf("Please enter a symbol to use for the pattern: ");
    // scanf("%c", &symbol);
    // printf("\n");

    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k = 0; k < (n - i); k++)
    //     {
    //         printf("%c ", symbol);
    //     }
    //     printf("\n");
    // }




    // CHATGPT ANSWER REFERENCE:
    // int n = 7; // Number of rows

    // for (int i = 0; i < n; i++) {
    //     // Print leading spaces
    //     for (int j = 0; j < i; j++) {
    //         printf(" ");
    //     }

    //     // Print asterisks
    //     for (int k = 0; k < (n - i); k++) {
    //         printf("* ");
    //     }

    //     printf("\n"); // Move to next line
    // }

    char symbol;
    printf("Please enter a symbol to use for the pattern: ");
    scanf("%c", &symbol);
    printf("\n");

    int n = 7; // Number of rows

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        
        for (int k = 0; k < (n - i); k++) {
            printf("%c ", symbol);
        }

        printf("\n"); 
    }



    
    
    return 0;
}



