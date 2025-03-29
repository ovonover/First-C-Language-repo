#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int do_Two();
int do_Three();
double do_Four();

int main()
{
    printf("\nNumber is: %d (do_two)", do_Two());
    printf("\nNumber is: %d (do_three)", do_Three());
    printf("\nNumber is: %d (do_four)", do_Four());
    
    return 0;
}

int do_Two()
{
    
    int x = 10;
    int y = 20;
    int z = x + y;
    return z;
}

int do_Three()
{
    int a,b,c;
    printf("\nEnter value one ");
    scanf("%d", &a);
    printf("\nEnter value two ");
    scanf("%d", &b);

    c = a + b;
    // int x = 10;
    // int y = 20;
    // int z = x + y;
    return c;
}

double do_Four()
{
    int a,b;
    double c;
    a=10;
    b=20;
    c = a / b;
    return c;
}


