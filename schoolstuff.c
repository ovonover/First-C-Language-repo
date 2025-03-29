#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    char syl;
    int num;

    printf("Please enter a symbol: ");
    scanf("%c", &syl);

    printf("Please enter how many rows you want: ");
    scanf("%d", &num);

    int j = 1, i = 1;

    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf("%c", syl);
        }
        // printf("%c", syl);
        printf("\n");
    }
    
    return 0;
}
