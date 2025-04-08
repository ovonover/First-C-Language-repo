#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int *p, n, i, j, temp;
    printf("\nEnter number of elements in the array: ");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int));

    for(i = 0; i < n; i++){
        printf("\nEnter element no. %d: ", i + 1);
        scanf("%d", &p + i);
    }

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++)
        {
            if(*(p + i) > *(p + i)){
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
        printf("%d\n", *(p + i));
    return 0;
}