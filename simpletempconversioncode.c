#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n The temp in Farenheit is: %.1lf", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\n The temp in Celsius is: %.1lf", temp);
    }
    else{
        printf("\n %c is not a valid unit of measurement!!!");
    }
    return 0;
}