#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    double num1, var;

    printf("Please enter your number: ");
    scanf("%lf", &num1);

    if (num1 <= 1)
    {
        printf("The number your entered cannot be a prime number\n");
        return 0;
    }
    

    if (num1 / 1 && num1 / num1 == true)
        {
            printf("The number you entered is a Prime Number\n");
        }
        else if (num1 % num1 == 0);
        {
            printf("The number you entered is a Prime Number\n");
        }
        


    // for(int i = 1; i <= num1; i++){
    //     if (num1 / 1 && num1 / num1 == true)
    //     {
    //         printf("The number you entered is a Prime Number\n");
    //     }
    //     else{
    //         printf("The number you entered is a Prime Number\n");
    //     }
    // }
    return 0;
}
