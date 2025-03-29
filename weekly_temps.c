#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Variable(s) to be used in the program
    float temps[7]; // Array to hold temperatures for 7 days
    char week_days[7][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    char name_holder_highest[20], name_holder_lowest[20];
    char temp_type;
    unsigned short n; // Looping variable
    float highest = -256, lowest = 1000; // Variables to store the highest and lowest temperatures
    int highest_index, lowest_index;
    float meanScore; // Stores the mean temperature
    float total = 0; // For the total temperature

    for(n = 0; n < 7; n++)
    {
        do {
            printf("Please enter the temperature type (C for Celsius, F for Fahrenheit): \n");
            scanf(" %c", &temp_type);
            //temp_type = toupper(temp_type);  // Convert to uppercase for case-insensitive comparison
        } while (temp_type != 'C' && temp_type != 'F');

        
        printf("Please enter the temperature for %s: \n", week_days[n]);
        scanf("%f", &temps[n]);

        
        



        total += temps[n];

        // Get the highest and lowest temperatures
        if(temps[n] > highest)
        {
            highest = temps[n];
            highest_index = n;
        }
        if(temps[n] < lowest)
        {
            lowest = temps[n];
            lowest_index = n;
        }
    }

    // Correctly copy day names for highest and lowest temperatures
    strcpy(name_holder_highest, week_days[highest_index]);
    strcpy(name_holder_lowest, week_days[lowest_index]);

    meanScore = total / 7.0;

    printf("\nThe Week's Temperature Details");
    printf("\n------------------------------------");
    printf("\nTotal Temperature of 7 days: %.2f%c", total, temp_type);
    printf("\nMean Temperature of 7 days: %.2f%c", meanScore, temp_type);
    printf("\nHighest Temperature was on %s: %.2f%c", name_holder_highest, highest, temp_type);
    printf("\nLowest Temperature was on %s: %.2f%c", name_holder_lowest, lowest, temp_type);
    printf("\n------------------------------------");

    return 0;
}