#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int squarer1(int num1);
int squarer2();
void squarer3();
void squarer4(int num1);

int main()
{
    int num;
    printf("\nPlease enter a value: ");
    scanf("%d", &num);
    printf("\n1. Answer is %d\n", squarer1(num));
    printf("\n2. Answer is %d\n", squarer2());
    squarer3();
    squarer4(num);
    return 0;
}

int squarer1(int num1)
{
    int ans = num1 * num1;
    return ans;
}

int squarer2()
{
    int num;
    printf("\n\nPlease enter a value: ");
    scanf("%d", &num);
    int ans = num * num;
    return ans;
}

void squarer3()
{
    int num;
    printf("\nPlease Enter a Value: ");
    scanf("%d", &num);
    int ans = num * num;
    printf("\n3. Answer = %d", ans);
}

void squarer4(int num1)
{
    int ans = num1 * num1;
    printf("\n4. Answer = %d", ans);
}
