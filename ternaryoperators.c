#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int findMax(int x, int y)
{
    /*
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */
    return (x > y) ? x : y; //same Code as above there!
    
}

int main()
{
    int max = findMax(3, 4);
    printf("%d", max);
    return 0;
}
