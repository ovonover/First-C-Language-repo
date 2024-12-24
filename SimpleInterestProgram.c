#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// int main()
// {
//     int principal, period;
//     float rate, si;
//     principal = 1000;
//     period = 3;
//     rate = 8.5;
//     si = principal * period * rate / 100;
//     printf("%f", si);
//     return 0;
// }

// int main()
// {
//     int a, b, c, sum;
//     printf("\n Enter any three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     sum = a + b + c;
//     printf("\n Sum = %d", sum);
//     return 0;
// }

// int main()
// {
//     int num1, sum;

//     printf("Please enter a number: ");
//     scanf("%d", &num1);
//     sum = pow(num1, 2);

//     printf("The number squared is: %d", sum);

//     return 0;
// }

// int main()
// {
//     double radius, diameter;
//     double area, perimeter;
//     const double PI = 3.14;

//     printf("Please provide the Radius: ");
//     scanf("%lf", &radius);

//     diameter = radius * radius;
//     printf("The diameter is: %.2lf\n", diameter);

//     area = PI * radius * radius;
//     printf("the area of the circle is: %.2lf\n", area);

//     perimeter = 2 * PI * radius;
//     printf("The perimeter is: %.2lf\n", perimeter);

//     return 0;
// }

int main()
{
    int salary, age;

    printf("Enter your Salary: ");
    scanf("%d", &salary);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is: %d, and your salary is: %d", age, salary);
    return 0;
}
