#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable(s) to be used in the program
    auto unsigned short score[5]; // An array of unsigned shorts to hold the student's score
    unsigned short n; // Looping variable
    unsigned short highest = 0, lowest = 100; // Variables to store the highest and lowest scores
    float meanScore; // Stores the class average/meanScore
    unsigned int total = 0; // For the total score

    // Prompt the user for the student's score
    for(n = 0; n < 5; n++)
    {
        printf("Please enter the score for student %d; \n", n + 1);
        scanf("%hu", &score[n]);

        // Calculate the total for the entire class
        total += score[n]; // Same as total = total + score[n];
        
        // Get the highest and lowest scores
        if(score[n] >  highest)
        {
            highest = score[n];
        }
        if(score[n] <  lowest)
        {
            lowest = score[n];
        }
    }


    // Calculate the mean/avg. score
    meanScore = total / 5.0;

    // Display the exam details
    printf("\nClass Exam Details");
    printf("\n------------------------------------");
    printf("\nClass Total Score: %d", total);
    printf("\nClass Mean Score: %.2f", meanScore);
    printf("\nHighest Score: %hu", highest);
    printf("\nLowest Score: %hu", lowest);
    printf("\n------------------------------------");
    return 0;
}



