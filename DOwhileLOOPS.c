#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int number = 0;
    int sum = 0;

    // while(number > 0)
    // {
    //     printf("Enter a number above zero:");
    //     scanf("%d", &number);
    //     if(number > 0)
    //     {
    //         sum += number;
    //     }
    // }

    
    do{
        printf("Enter a number above zero:");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);
    
    return 0;
}
