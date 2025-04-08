/* C program that demonstrates the uses of Pointers in manipulating arrays. */
#include <stdio.h>

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    unsigned short int scores[] = {70, 60, 52, 100, 10}, n; //An array of scores and the looping variable
    unsigned short *ptrScores = scores; // Declare a short pointer and assign it to the 1st score
    unsigned int total = 0;

    //Display the scores and their storage locations using the pointer
    for(n = 0; n < sizeof(scores) / sizeof(scores[0]); n++)
    {
        if(scores[n] >= 70 && scores[n] <= 100)
        {
            printf("Score %hu. is %3hu, grade is A and is stored in memory location: 0X%x\n",
                   n + 1, *(ptrScores + n), ptrScores + n);
        }
        else if(scores[n] >= 60 && scores[n] <= 69)
        {
            printf("Score %hu. is %3hu, grade is B and is stored in memory location: 0X%x\n",
                   n + 1, *(ptrScores + n), ptrScores + n);
        }
        else if(scores[n] >= 50 && scores[n] <= 59)
        {
            printf("Score %hu. is %3hu, grade is C and is stored in memory location: 0X%x\n",
                   n + 1, *(ptrScores + n), ptrScores + n);
        }
        else if(scores[n] >= 40 && scores[n] <= 49)
        {
            printf("Score %hu. is %3hu, grade is D and is stored in memory location: 0X%x\n",
                   n + 1, *(ptrScores + n), ptrScores + n);
        }
        else
        {
            printf("Score %hu. is %3hu, grade is E and is stored in memory location: 0X%x\n",
                   n + 1, *(ptrScores + n), ptrScores + n);
        }

        total += *(ptrScores + n);
    }

    //Display the results
    printf("\nThe class total is %u.", total);
    printf("\nThe class average is %.2f.", total /5.0);
   return 0;

}