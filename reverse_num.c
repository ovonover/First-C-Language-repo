/*
Write a C program called 'reverse_num.c' that accepts a positive whole number
with a minimum of 4 digits and a maximum of 7 digits from the user then reverses it.

Sample input and output
-234   -> Please enter a positive value
432    -> Please enter a value with 4 - 7 digits
345098745 -> Please enter a value with 4 - 7 digits
49873 -> 37894
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main()
 {
    /*
     
        BEGIN
        DECLARE 3 VARIABLES: USER_INPUT, COUNT_NUM, ORIGINAL_NUM, REVERSED;
        ACCEPT ONE VALUE FROM USER;
        CHECK IF THE NUMEBER IS LESS THAN ZERO (NEGATIVE NUMBER)
        IF(USER_INPUT < 0)
        {
            DISPLAY ERROR MESSAGE STATING TO INPUT POSITIVE VALUES;
        }

        CHECK IF THE NUMBER DIGIT COUNT IS BETWEEN 4 TO 7;

        TEMP = USER_INPUT;
        WHILE(COUNT < 0)
        {
            TEMP = TEMP / 10;
            COUNT++;
        }

        IF(COUNT < 4 || COUNT > 7)
        {
            DISPLAY ERROR MESSAGE SHOWING THAT THE NUMBER DID NOT MEET THE DIGIT REQUIREMENT;
        }

        REVERSE THE USER_INPUT USING ARITHMETICS;
        TEMP = USER_INPUT;
        WHILE(COUNT < 0)
        {
            COUNT = TEMP % 10;
            REVERSED = REVERSED * 10 + COUNT;
            TEMP = TEMP / 10;
        }

        DISPLAY THE REVERSED NUMBER/VALUE INPUTTED BY THE USER;

        END
     
    */
     
     
    int user_input;
    int temp;
    int count = 0;
    int reversed = 0;
    printf("Please enter a whole positive number from (4 - 7) digits:\n");
    scanf("%d", &user_input);
 
   
 
    if(user_input < 0)
    {
        printf("Please enter a positive number.\nExiting program.");
        return 1;
    }

    temp = user_input;
    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    if(count < 4 || count > 7)
    {
        printf("Please enter a number between 4 to 7.\nExiting Program");
        return 1;
    }

    temp = user_input;
    while(temp > 0)
    {
        count = temp % 10;
        reversed = reversed * 10 + count;
        temp = temp / 10;
    }


    printf("The reversed number is: %d", reversed);

     return 0;
 }
 