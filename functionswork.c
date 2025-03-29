#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

float area(int radius, float pi);

int main()
{
    int r;
    float pi = 3.14;
    printf("Please enter a value: ");
    scanf("%d", &r);

    printf("Answer is %f", area(r,pi));
    return 0;
}

float area(int radius, float pi)
{
    return pi * radius * radius;
}
