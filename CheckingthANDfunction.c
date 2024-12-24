#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float temp;
    bool sunny = true;

    printf("Please enter your temp in Celsius: ");
    scanf("%f", &temp);

    printf("\nIs it sunny today? ");
    scanf("%d", &sunny);

    if(temp >= 0 && temp <= 36 && sunny){
        printf("The weather is good!!!");
    }
    else{
        printf("\nThe weather is bad!!!");
    }
    return 0;
}
