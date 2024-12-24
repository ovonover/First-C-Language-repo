#include <stdio.h>
#include <stdbool.h>

int main()
{
    float temp;

    printf("Enter the Temperature please: ");
    scanf("%f", &temp);

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }
    return 0;
}
