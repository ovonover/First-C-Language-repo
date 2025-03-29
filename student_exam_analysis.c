/*
C program that accepts the number, names of students in a class and their scores in four exams, calculates and displays
each student total, mean, grade, and comment. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Variable(s) to be used in the program
    unsigned short num0fStudents, num0fsubjects;
    unsigned short n, a; // looping variables

    //Prompt the user for the number of students in the class and the subjects they're taking
    printf("Please enter the number of students in the class:\n");
    scanf("%hu", &num0fStudents);
    printf("Please enter the number of subjects the students are taking:\n");
    scanf("%hu", &num0fsubjects);

    // Single dimension array to hold each student's total && mean scorea and their grade
    unsigned int total[num0fStudents];
    float mean[num0fStudents];
    char grade[num0fStudents];

    // Two dimensional array to hold the comment and each student's score per subject
    char comment[num0fStudents][20];
    unsigned short studentScore[num0fStudents][num0fsubjects]; //Stores the scores
    char studentNames[num0fStudents][20], subjectNames[num0fsubjects][15];

    // Read in the student's names
    for(n = 0; n < num0fStudents; n++)
    {
        printf("\nPlease enter the name of students %hu ", n + 1);
        scanf("%s", studentNames[n]);
    }

    for(n = 0; n < num0fsubjects; n++)
    {
        printf("\nPlease enter the name of subjects %hu ", n + 1);
        scanf("%s", subjectNames[n]);
    } 

    for(n = 0; n < num0fStudents; n++)
    {
        // Initialise each student's score to 0 "zero"
        total[n] = 0;
        for(a = 0; a < num0fsubjects; a++) // Columns
        {
            printf("\nPlease enter %s\'s score in %s -> ", studentNames[n], subjectNames[a]);
            scanf("%hu", &studentScore[n][a]);
            total[n] += studentScore[n][a];
        }

        //Calculate each student's mean score
        mean[n] = total[n] / ((float)num0fsubjects);

        //Get the student's grade based on their mean score
        if(mean[n] >= 70)
            grade[n] = 'A';
        else if(mean[n] >= 60)
            grade[n] = 'B'; 
        else if(mean[n] >= 50)
            grade[n] = 'C';
        else if(mean[n] >= 40)
            grade[n] = 'D'; 
        else    
            grade[n] = 'E'; 


        //Assignment: use a switch case to assign the student a comment
        //hint use a function for the <string.h> header file.

        switch(grade[n])
        {
            case 'A':
                strcpy(comment[n], "Excellent");
                break;
            case 'B':
                strcpy(comment[n], "Very Good");
                break;
            case 'C':
                strcpy(comment[n], "Fair");
                break;
            case 'D':
                strcpy(comment[n], "Try Harder");
                break;
            case 'E':
                strcpy(comment[n], "Failed");
                break;
            default:
                strcpy(comment[n], "Unknown");
        }

    }

    //Display the results
    printf("\n%12s", "Student Name");
    for (a = 0; a < num0fsubjects; a++)
    {
        printf("%12s", subjectNames[a]);
    }
    printf("%13s %12s %12s %12s", "Total", "Average", "Grade", "Comment");

    for(n = 0; n < num0fStudents; n++)
    {
        printf("\n%12s", studentNames[n]);
        for(a = 0; a < num0fsubjects; a++)
        {
            printf("%12hu ", studentScore[n][a]);
        }
        printf(" %10d  %10.1f %10c %15s ", total[n], mean[n], grade[n], comment[n]);
    }
    return 0;
}