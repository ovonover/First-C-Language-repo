#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("\nEnter a number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter a number of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}
