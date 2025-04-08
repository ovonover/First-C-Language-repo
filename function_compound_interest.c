/* C program demonstrating passing of values to a function by reference to calculate the compound  interset on a loan/deposit amount. */

// Pre-processor directive(s).
#include <stdio.h>
#include <math.h>

// Function prototypes/declarations.
void calc_compound_interest(float *ptrPrincipal, float rate, unsigned short years);

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    float principalAmount, interestRate, initialAmount;
    unsigned short duration;

    // Prompt the user fot the loan/deposit details.
    printf("Please enter the principal (loan/deposit) amount ->\n");
    scanf("%f", &principalAmount);

    initialAmount = principalAmount;

    printf("\nPlease enter the interest rate -> \n");
    scanf("%f", &interestRate);

    printf("\nPlease enter the number of years the amount is to be depostied/loaned out ->\n");
    scanf("%hu", &duration);

    //Calculate the compound interest using the function.
    calc_compound_interest(&principalAmount, interestRate, duration);

    // Display the loan/deposit details.
    printf("\n----------------------------------");
    printf("\nInitial Amount: Kes. %.2f .", initialAmount);
    printf("\nInterest Rate: %.2f %% .", interestRate);
    printf("\nDuration in Years: %hu .", duration);
    printf("\nFinal Amount: Kes. %.2f .", principalAmount);
    printf("\n----------------------------------");
    
    return 0;

} // End of fucntion main()

// Function definition of the calc_compound_interest() function.
void calc_compound_interest(float *ptrPrincipal, float rate, unsigned short years) {
    // Calculate the compound interest by modifying the principal directly.
    *ptrPrincipal = *ptrPrincipal * pow(1 + (rate/100.0), years);

}// End of function calc_compound_interest().