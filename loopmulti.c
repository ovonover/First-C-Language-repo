#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    //Without modification

    // int num1, sum;

    // printf("Please enter your number: ");
    // scanf("%d", &num1);

    // printf("\nThis is the multiplication table for your number!");
    // for(int i = 1; i <= 12; i++)
    // {
    //     sum = num1 * i;
    //     printf("%d x %d = %d\n", num1, i, sum);
    // }

    //with modification

    int num1, sum, j;

    printf("Please enter your number: ");
    scanf("%d", &num1);

    printf("how far do you want the table to go? ");
    scanf("%d", &j);

    printf("\nThis is the multiplication table for your number!");
    for(int i = 1; i <= j; i++)
    {
        sum = num1 * i;
        printf("%d x %d = %d\n", num1, i, sum);
    }
    return 0;
}
