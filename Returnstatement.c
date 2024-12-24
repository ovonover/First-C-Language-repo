#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double square(double x) //function!!!
{
    return x * x;
}

int main()
{
    double x = square(3.14);
    printf("%lf", x);
    return 0;
}
