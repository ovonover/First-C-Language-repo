#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // int i;
    // int num;
    // int sum;

    // printf("Please enter a number: ");
    // scanf("%d", &num); 

    // for(i = 1; i <= num; i++)
    // {
    //     sum = sum + num;  
    // }

    // printf("Your sum of the numbers is: %d", sum);
    // return 0;

    int col, row;       //Operators for the "for loops" to work.

    int num;            //number of rows needed.

    printf("Please enter a how many rows you want: ");
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        printf("tuff lyfe: ");
        for (row = col; row <= num; row++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
    

    return 0;
}

void main()
{
    int whatever, happens;
    whatever = happens * happens;
}
