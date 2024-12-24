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

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", syl);
        }
        // printf("%c", syl);
        printf("\n");
    }
    
    return 0;
}
