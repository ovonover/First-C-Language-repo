#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // for(int i = 1; i <= 10; i++)
    // {
    //     printf("%d\t", i);
    // }
    
    // int sum;
    // for(int i = 1; i <= 10; i++)
    // {
    //     sum = sum + i;
    //     printf("%d\t", i);
    // }

    // printfs("\n The sum is : %d\n", sum);
    int sum;
    for (int i = 1; i <= 100; i++){
        
        if(i % 2 == 0){
            //its even
            sum += i; 
        }
        
    }
    printf("%d\t", sum);
    return 0;
}
