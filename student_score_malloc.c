/* C program demonstrating the allocation and de-allocation/release of memory using the mallo() and free() functions respectively. */

// Pre-processor directive(s).
#include <stdio.h>
#include <stdlib.h>

// Main function begins program execution
int main()
{
    // Variable(s) to be used in the program.
    unsigned int n, numOfStudents;
    unsigned short *ptrStudentScores; //Pointer to an array to store the student's scores.
    unsigned short score;

    // Prompt the user for the number of students in class.
    printf("How many students are in the class?\n");
    scanf("%d", &numOfStudents);

    // Use malloc() to allocate memory.
    ptrStudentScores = (unsigned short*) malloc(numOfStudents * sizeof(unsigned short));

    // Read in the student's scores once memory is allocated successfully.
    if(ptrStudentScores != NULL)
    {
        // Prompt the user for the student's Scores.
        for(n = 0; n < numOfStudents; n++)
        {
            printf("Please enter the score for student %hu -> \n", n + 1);
            scanf("%hu", &score);
            *(ptrStudentScores + n) = score;
            // TODO : Calculate the class total here.
        }
        // TODO : Calculate the class mean/avg. here.



        // Display the scores to the use
        for(n = 0; n < numOfStudents; n++)
        {
            printf("\nStudent 0%hu \t Score: %hu", n + 1, *(ptrStudentScores + n));
        }
        // TODO : Calculate the class mean/avg. here.

            
        // De-allocate /release the memory upon successful program completion
        free(ptrStudentScores);
        return 0;
    }
    // What to do when memory allocation (call to malloc()) fails.
    else
    {
        // Inform the user of the problem and offer a solution.
        printf("\nUnfortunately there is insufficient memory to run the program."
                "\nPlease close some programs and try again. \n");
        return 1; //exit(1) terminate the program due to memory allocation failure.
    }
    
    return 0;

} // End of fucntion main()

