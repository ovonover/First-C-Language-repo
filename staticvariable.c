#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    incre();
    incre();
    incre();
    return 0;
}

incre()
{
    static char var = 65; /* var is automatic variable */
    printf("\nThe character stored in var is %c", var++);
}
