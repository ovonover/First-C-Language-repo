#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void hello(char[], int);

int main()
{
    char name[] = "Ali";
    int age = 20;

    hello(name, age);
    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}
