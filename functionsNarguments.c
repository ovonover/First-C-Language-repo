#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Ali";
    int age = 21;
    birthday(name, age);

    return 0;
}
